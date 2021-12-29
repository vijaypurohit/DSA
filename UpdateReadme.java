import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;

import java.time.format.DateTimeFormatter;
import java.time.LocalDateTime;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

class OnlineInfo
{
	HashMap<String,String> questionDifficultyMap;
	OnlineInfo()
	{
		this.questionDifficultyMap = new HashMap<String,String>();
		try{
		BufferedReader reader = new BufferedReader(new FileReader("OnlineInfo.csv"));
		String nextLine = "";
		while ((nextLine = reader.readLine()) != null)
		{
			String[] tokens = nextLine.split(",");
			this.questionDifficultyMap.put(tokens[0],tokens[1]);
		}
		reader.close();
		}
		catch(IOException ie)
		{}
	}

	//getter methods
	public HashMap<String,String> getQuestionDifficultyMap() { return this.questionDifficultyMap; }

	//updater methods
	public HashMap<String,String> updateFile(String questionKey, String difficulty) throws IOException
	{
		BufferedWriter writer = new BufferedWriter(new FileWriter("OnlineInfo.csv",true));
		writer.write(questionKey);
		writer.write(",");
		writer.write(difficulty);
		writer.newLine();
		writer.close();
		this.questionDifficultyMap = new HashMap<String,String>();
		BufferedReader reader = new BufferedReader(new FileReader("OnlineInfo.csv"));
		String nextLine = "";
		while ((nextLine = reader.readLine()) != null)
		{
			String[] tokens = nextLine.split(",");
			this.questionDifficultyMap.put(tokens[0],tokens[1]);
		}
		reader.close();
		return this.questionDifficultyMap;
	}
}

class Parse
{

	private int isAKeyWord(String str)
	{
		if (str.equals("abstract") || str.equals("assert") || str.equals("boolean") || str.equals("break") || str.equals("byte") || str.equals("case") || str.equals("catch") || str.equals("char") || str.equals("class") || str.equals("const") || str.equals("continue") || str.equals("default") || str.equals("do") || str.equals("double") || str.equals("else") || str.equals("extends") || str.equals("false") || str.equals("final") || str.equals("finally") || str.equals("float") || str.equals("for") || str.equals("goto") || str.equals("if") || str.equals("implements") || str.equals("import") || str.equals("instanceof") || str.equals("int") || str.equals("interface") || str.equals("long") || str.equals("native") || str.equals("new") || str.equals("null") || str.equals("package") || str.equals("private") || str.equals("protected") || str.equals("public") || str.equals("return") || str.equals("short") || str.equals("static") || str.equals("strictfp") || str.equals("super") || str.equals("switch") || str.equals("synchronized") || str.equals("this") || str.equals("throw") || str.equals("throws") || str.equals("transient") || str.equals("true") || str.equals("try") || str.equals("void") || str.equals("volatile") || str.equals("while"))
			return 1;
		return 0;
	}
}

class Questions
{
	private String questionKey;
	private HashMap<String,Integer> questionLinks;
	private HashMap<String,String> solutionLinks;
	private String difficulty;

	Questions(String key, HashMap<String,Integer> qLinks, String sLink, String difficulty)
	{
		this.questionKey = key;
		this.questionLinks = qLinks;
		this.solutionLinks = new HashMap<String,String>();
		if (sLink.charAt(sLink.length()-1) == 'a') //java
			this.solutionLinks.put("Java",sLink);
		else if (sLink.charAt(sLink.length()-1) == 'p') //cpp
			this.solutionLinks.put("CPP",sLink);
		this.difficulty = difficulty;
	}

	//getter methods
	public String getQuestionKey() { return this.questionKey; }
	public HashMap<String,Integer> getQuestionLinks() { return this.questionLinks; }
	public HashMap<String,String> getSolutionLinks() { return this.solutionLinks; }
	public String getDifficulty() { return this.difficulty; }

	//solution link updation
	public void addSolutionLink(String sLink)
	{
		if (sLink.charAt(sLink.length()-1) == 'a') //java
			this.solutionLinks.put("Java",sLink);
		else if (sLink.charAt(sLink.length()-1) == 'p') //cpp
			this.solutionLinks.put("CPP",sLink);
	}

	public void printQuestion(BufferedWriter writer) throws IOException
	{
		writer.write("Question-"+questionKey); writer.newLine();
		Iterator linkIterator = questionLinks.entrySet().iterator(); //question links iterator
		writer.write("Question links-"); writer.newLine();
		while (linkIterator.hasNext()) //for each entry
		{
			Map.Entry questionLink = (Map.Entry)linkIterator.next(); //get the entry
			writer.write((String)questionLink.getKey()); writer.newLine(); //write the link
		}
		linkIterator = solutionLinks.entrySet().iterator(); //solution links iterator
		writer.write("Solution links-"); writer.newLine();
		while (linkIterator.hasNext()) //for each entry
		{
			Map.Entry solutionLink = (Map.Entry)linkIterator.next(); //get the entry
			writer.write((String)solutionLink.getValue()); writer.newLine(); //write the link
		}
	}
}

class Topics
{
	private String topic; //name of the topic/directory
	private int javaCount; //total number of .java files
	private int cppCount; //total number of .cpp files
	private HashMap<String,Integer> questionIndexMap; //stores the question key and the index of indexDetailsMap array
	private Questions[] indexDetailsMap; //stores the details for each question in an array
	private int qIndex;

	Topics()
	{}

	Topics(String topic, int noq)
	{
		this.topic = topic;
		javaCount = cppCount = 0;
		questionIndexMap = new HashMap<String,Integer>();
		indexDetailsMap = new Questions[noq];
		qIndex = 0;
	}

	//setter methods
	public void setJavaCount(int count) { this.javaCount = count; }
	public void setCppCount(int count) { this.cppCount = count; }

	//getter methods
	public String getTopicName() { return this.topic; }
	public int getJavaCount() { return this.javaCount; }
	public int getCppCount() { return this.cppCount; }
	public HashMap<String,Integer> getQuestionIndexMap() { return this.questionIndexMap; }
	public Questions[] getIndexDetailsMap() { return this.indexDetailsMap; }

	public String getQuestionKey(String link, int nameIndex)
	{
		String[] tokens = link.split("/"); //split by "/"
		String questionKey = "";
		if (nameIndex < 0) //for codeforces, attach two elements
		{
			questionKey += tokens[Math.abs(nameIndex)];
			questionKey += "-";
			questionKey += tokens[Math.abs(nameIndex)+1];
		}
		else //for others, attach one element
		{
			questionKey += tokens[nameIndex];
		}
		return questionKey;
	}

	//methods for adding questions
	public void addQuestion(HashMap<String,Integer> links, String topic, String program, String difficulty)
	{
		String link = "";
		int nameIndex = -1;
		Iterator linkIterator = links.entrySet().iterator(); //iterator for question links
		if (linkIterator.hasNext()) //for the first entry in links
		{
			Map.Entry linkDetails = (Map.Entry)linkIterator.next(); //get the entry
			link = (String)linkDetails.getKey(); //get the link
			nameIndex = (Integer)linkDetails.getValue(); //get the index of the question in the array splitted by "/"
		}
		String questionKey = getQuestionKey(link,nameIndex);

		//get the solution link
		String solutionLink = "./";
		solutionLink += topic;
		solutionLink += "/";
		solutionLink += program;

		//check existence of the current question
		boolean exists = false;
		String existingQuestionKey = "";
		Iterator questionIndexMapIterator = questionIndexMap.entrySet().iterator(); //question to index map iterator
		while (questionIndexMapIterator.hasNext()) //for each entry in the map
		{
			int questionIndex = (Integer)((Map.Entry)questionIndexMapIterator.next()).getValue(); //get the current question index
			Questions currentQuestion = indexDetailsMap[questionIndex]; //get the current question
			HashMap<String,Integer> currentQuestionLinks = currentQuestion.getQuestionLinks(); //get the question links
			Iterator questionLinkIterator = currentQuestionLinks.entrySet().iterator(); //question links iterator
			while (questionLinkIterator.hasNext()) //for each entry in the question links
			{
				String currentQuestionLink = (String)((Map.Entry)questionLinkIterator.next()).getKey(); //get the link
				String[] currentTokens = currentQuestionLink.split("/"); //split by "/"
				for (String currentToken : currentTokens) //for each token
				{
					if (currentToken.equals(questionKey)) //if the current token matches with the question key created above
					{
						exists = true; //mark exists
						existingQuestionKey = currentQuestion.getQuestionKey(); //get the current question key and store
					}
				}
			}
		}

		if (exists)
		{
			int questionIndex = (Integer)questionIndexMap.get(existingQuestionKey); //get the existing question index
			indexDetailsMap[questionIndex].addSolutionLink(solutionLink); //add new solution to the existing question
		}
		else //if question does not exist
		{
			Questions question = new Questions(questionKey,links,solutionLink,difficulty); //create a new question with all data provided
			indexDetailsMap[qIndex] = question; //store in index to details map
			questionIndexMap.put(questionKey,qIndex); //add the index to question to index map
			++qIndex; //increase index
		}
	}

	public void printTopic(BufferedWriter writer) throws IOException
	{
		writer.write("TOPIC NAME: "+this.topic); writer.newLine();
		writer.write("Java files: "+this.javaCount); writer.newLine();
		writer.write("CPP files: "+this.cppCount); writer.newLine();
		writer.write("---------------------------------------------------------------------------------"); writer.newLine();
		Iterator linkIterator = this.questionIndexMap.entrySet().iterator(); //question to index map iterator
		int bullet = 1;
		while (linkIterator.hasNext()) //for each entry in the map
		{
			Map.Entry questionAndIndex = (Map.Entry)linkIterator.next(); //get the current entry
			int index = (Integer)questionAndIndex.getValue(); //get the index
			Questions question = indexDetailsMap[index]; //get the current question
			writer.write((bullet++)+"."); writer.newLine(); //print a number
			question.printQuestion(writer); //print the current question
			writer.newLine();
		}
	}
}

class UpdateReadme
{
	public static void main(String[] args) throws IOException
	{
		//important declarations
		String mainPathStr = "E:\\DSA\\Coding";
		File mainPath = new File(mainPathStr);
		Topics[] topicDetails; //main arrat that stores all the details of the folder

		//read online information
		OnlineInfo onlineInfo = new OnlineInfo();
		HashMap<String,String> questionDifficultyMap = onlineInfo.getQuestionDifficultyMap();

		//get the list of folders i.e. the topics
		String[] topics = mainPath.list();
		
		//opening readme file in write mode
		File readmeFile = new File("README.md");
		if (!readmeFile.exists()) readmeFile.createNewFile();
		BufferedWriter fileWriter = new BufferedWriter(new FileWriter(readmeFile));
		
		//write the first fixed segment
		printFixedMessage(fileWriter,1);
		
		//count the number of topic directories
		int dirCount = 0;
		for (String topic : topics)
			if (!containsDot(topic)) ++dirCount;

		//define topics array
		topicDetails = new Topics[dirCount];
		int index = 0;

		for (String topic : topics) //for each topic
		{
			if (!containsDot(topic)) //if it doesn't contain a dot that means it is a directory
			{
				//get the topic directory path
				String topicPathStr = new String(mainPathStr);
				topicPathStr += "\\";
				topicPathStr += topic;
				File topicPath = new File(topicPathStr);

				String[] programs = topicPath.list(); //list the files in that folder
				int javaCount = 0, cppCount = 0;

				topicDetails[index] = new Topics(topic,programs.length); //create a new topic
				//store java and cpp counts
				for (String program : programs) //for each file
				{
					if (program.equals("dummy.txt")) continue; //ignore txt files
					if (program.charAt(program.length()-1) == 'p') ++cppCount; //increase cpp count
					if (program.charAt(program.length()-1) == 'a') ++javaCount; //increase java count
					
					//get the file path
					String codeFileName = new String(topicPathStr);
					codeFileName += "\\";
					codeFileName += program;
					File codeFile = new File(codeFileName);

					//open a reader to read the code file
					BufferedReader reader = new BufferedReader(new FileReader(codeFile));

					String nextLine = "", difficulty = "";
					HashMap<String,Integer> questionLinks = new HashMap<String,Integer>(); //stores the question links and their indices after splitting from "/"
					while ((nextLine = reader.readLine()) != null) //for each line
					{
						int nameIndex = isALink(nextLine); //get the index of the question
						if (nameIndex != -1) //if the index is not -1
						{
							nextLine = extractProperLink(nextLine);
							nameIndex = isALink(nextLine);
							questionLinks.put(nextLine,nameIndex); //add to map
							/*
							// one time full online updation done, no need to uncomment
							if (getLinkName(nextLine) == 2) //for GFG links
							{
								System.out.println(nextLine);
								System.setProperty("http.proxyHost", "127.0.0.1");
 						       	System.setProperty("http.proxyPort", "8182");
      							Document document = Jsoup.connect(nextLine).get();
								Elements strongs = document.getElementsByTag("strong");
								for (Element strong : strongs)
								{
									if (strong.attr("class").equals("problem-tab__problem-level"))
									difficulty = strong.text();
								}
							}*/
							if (getLinkName(nextLine) == 2) //for GFG links
							{
								String gfgQuestionKey = new Topics().getQuestionKey(nextLine,nameIndex);
								if (questionDifficultyMap.containsKey(gfgQuestionKey)) //if old gfg question
									difficulty = questionDifficultyMap.get(gfgQuestionKey); //retrieve data from map
								else //if new gfg question
								{
									//get info from webpage
									System.setProperty("http.proxyHost", "127.0.0.1");
	 						       	System.setProperty("http.proxyPort", "8182");
	      							Document document = Jsoup.connect(nextLine).get();
									Elements strongs = document.getElementsByTag("span");
									int points = 0;
									for (Element strong : strongs)
									{
										if (strong.attr("class").equals("problem-tab__value") && (strong.text().trim().equals("1") || strong.text().trim().equals("2") || strong.text().trim().equals("4") || strong.text().trim().equals("8")))
											points = Integer.parseInt(strong.text());
									}
									difficulty = points == 1 ? "Basic" :
													points == 2 ? "Easy" :
														points == 4 ? "Medium" :
															points == 8 ? "Hard" : "null";
									//update the online info file
									questionDifficultyMap = onlineInfo.updateFile(gfgQuestionKey,difficulty);
								}
							}
						}
						else
						{
							//tc and sc logic goes here

						}
					}
					topicDetails[index].addQuestion(questionLinks,topic,program,difficulty); //add the question to the main array

					reader.close();
				}
				topicDetails[index].setJavaCount(javaCount);
				topicDetails[index].setCppCount(cppCount);

				++index;
			}
		}

		//write the data to a txt file for future reference
		File outputFile = new File("ConsoleOutput.txt");
		if (!outputFile.exists()) outputFile.createNewFile();
		BufferedWriter outputFileWriter = new BufferedWriter(new FileWriter(outputFile, true));
		//write the execution time
		DateTimeFormatter currentDateAndTime = DateTimeFormatter.ofPattern("dd-MMM-yyyy HH:mm:ss");
		LocalDateTime now = LocalDateTime.now();
		outputFileWriter.write("("+currentDateAndTime.format(now)+")"); outputFileWriter.newLine(); outputFileWriter.newLine();
		for (Topics topic : topicDetails) //for each topic
		{
			topic.printTopic(outputFileWriter); //print the current topic
			//print large topic separators
			outputFileWriter.write("=================================================================================================="); outputFileWriter.newLine();
			outputFileWriter.write("=================================================================================================="); outputFileWriter.newLine();
			outputFileWriter.newLine();			outputFileWriter.newLine();
		}
		outputFileWriter.newLine();		outputFileWriter.newLine();		outputFileWriter.newLine();		outputFileWriter.close();

		//write folder wise counts and total count
		fileWriter.write("| Topic Name | Java | CPP | "); fileWriter.newLine();
		fileWriter.write("| :--------: | :--------: | :--------: | "); fileWriter.newLine();
		int totalJava = 0, totalCpp = 0;
		for (Topics topic : topicDetails)
		{
			fileWriter.write("| ["+topic.getTopicName()+"](https://github.com/prateekshyap/DSA#"+topic.getTopicName().toLowerCase()+") | "+topic.getJavaCount()+" | "+topic.getCppCount()+" |"); fileWriter.newLine();
			totalJava += topic.getJavaCount(); totalCpp += topic.getCppCount();
		}
		fileWriter.write("| Total | "+totalJava+" | "+totalCpp+" |"); fileWriter.newLine(); fileWriter.newLine();

		//write next fixed segment
		printFixedMessage(fileWriter,2);

		int bullet = 1;
		//write question and solution details
		for (Topics topic : topicDetails)
		{
			fileWriter.write("## "+topic.getTopicName()); fileWriter.newLine(); fileWriter.newLine();
			fileWriter.write("|  #  |Title            |Links            |Solution         |Difficulty       |Time Complexity  |Space Complexity |"); fileWriter.newLine();
			fileWriter.write("|-----|---------------- |---------------- |---------------- |---------------- |---------------- |---------------- |"); fileWriter.newLine();

			HashMap<String,Integer> questionIndexMap = topic.getQuestionIndexMap(); //get the question to index map
			Questions[] indexDetailsMap = topic.getIndexDetailsMap(); //get the index to details map

			Iterator questionIndexMapIterator = questionIndexMap.entrySet().iterator(); //map iterator
			while (questionIndexMapIterator.hasNext()) //for each entry in question map
			{
				fileWriter.write("|  "+(bullet++)+"  |"); //write the number
				int questionIndex = (Integer)((Map.Entry)questionIndexMapIterator.next()).getValue(); //get the index
				Questions currentQuestion = indexDetailsMap[questionIndex]; //get the current question from array
				String currentQuestionName = frameQuestion(currentQuestion.getQuestionKey()); //get the key and transform it to title case
				fileWriter.write(currentQuestionName+"|"); //write the question key

				HashMap<String,Integer> currentQuestionLinks = currentQuestion.getQuestionLinks(); //get question links
				Iterator questionLinkIterator = currentQuestionLinks.entrySet().iterator(); //question links iterator
				HashMap<String,String> currentSolutionLinks = currentQuestion.getSolutionLinks(); //get solution links
				Iterator solutionLinkIterator = currentSolutionLinks.entrySet().iterator(); //solution links iterator

				int questionLinkCount = 0;
				while (questionLinkIterator.hasNext()) //for each question link
				{
					String currentQuestionLink = (String)((Map.Entry)questionLinkIterator.next()).getKey(); //get the link
					//currentQuestionLink = extractProperLink(currentQuestionLink); //trim the link
					questionLinkCount = getLinkName(currentQuestionLink); //get the platform name
					fileWriter.write("["+(questionLinkCount == 1 ? "LC" :
											questionLinkCount == 2 ? "GFG" :
												questionLinkCount == 3 ? "HR" :
													questionLinkCount == 4 ? "IB" : "CF")+"]("+currentQuestionLink+") "); //write the link
				}
				fileWriter.write("|");
				while (solutionLinkIterator.hasNext())
				{
					Map.Entry solutionLink = (Map.Entry)solutionLinkIterator.next();
					fileWriter.write("["+(String)solutionLink.getKey()+"]("+(String)solutionLink.getValue()+") ");
				}
				fileWriter.write("|"+currentQuestion.getDifficulty()+"|");
				//write time complexity
				fileWriter.write("|");
				//write space complexity
				fileWriter.write("|");
				fileWriter.newLine(); fileWriter.newLine(); fileWriter.newLine();
			}

			bullet = 1;
		}

		fileWriter.close();
	}

	public static String frameQuestion(String str)
	{
		String[] tokens = str.trim().split("-");
		StringBuffer question = new StringBuffer();
		StringBuffer temp = new StringBuffer();
		for (String token : tokens)
		{
			char firstChar = token.charAt(0);
			if (firstChar >= 'a' && firstChar <= 'z') firstChar = (char)(((int)firstChar)-32);
			temp = new StringBuffer(Character.toString(firstChar));
			temp.append(token.substring(1));
			question.append(temp);
			question.append(" ");
		}
		return question.toString().trim();
	}

	public static int getLinkName(String str)
	{
		String[] tokens = str.split("/");
		for (int i = 0; i < tokens.length; ++i)
		{
			String token = tokens[i];
			if (token.equals("leetcode.com")) return 1;
			else if (token.equals("practice.geeksforgeeks.org")) return 2;
			else if (token.equals("www.hackerrank.com")) return 3;
			else if (token.equals("www.interviewbit.com")) return 4;
			else if (token.equals("codeforces.com")) return 5;
		}
		return -1;
	}

	public static String extractProperLink(String str)
	{
		StringBuilder buffer = new StringBuilder(str.trim());

		//starting part
		if (buffer.charAt(0) == '/') //covers both // case and /* case
		{
			buffer.deleteCharAt(0);
			buffer.deleteCharAt(0);
		}
		else if (buffer.charAt(0) == '*') //covers multi line comments case
			buffer.deleteCharAt(0);

		//ending part
		if (buffer.charAt(buffer.length()-2) == '*' && buffer.charAt(buffer.length()-1) == '/')
		{
			buffer.deleteCharAt(buffer.length()-1);
			buffer.deleteCharAt(buffer.length()-1);
		}
		return buffer.toString().trim();
	}

	public static int isALink(String str)
	{
		String[] tokens = str.split("/");
		for (int i = 0; i < tokens.length; ++i)
		{
			String token = tokens[i];
			if (token.equals("leetcode.com") || token.equals("practice.geeksforgeeks.org") || token.equals("www.hackerrank.com") || token.equals("www.interviewbit.com"))
				return i+2; //question name appears after two indices
			else if (token.equals("codeforces.com"))
				return (i+3)*(-1); //question name appears after three indices
		}
		return -1;
	}

	public static boolean containsDot(String str)
	{
		for (int i = 0; i < str.length(); ++i)
			if (str.charAt(i) == '.')
				return true;
		return false;
	}

	public static void printFixedMessage(BufferedWriter writer, int trigger) throws IOException
	{
		switch(trigger)
		{
		case 1:
			writer.write("# Topicwise-Solutions-To-Coding-Questions"); writer.newLine(); writer.newLine();
			writer.write("Solutions to the algorithmic problems in [LeetCode](https://leetcode.com/problemset/algorithms/), [GeeksForGeeks](https://practice.geeksforgeeks.org/explore/?problemType=full&page=1), [Hackerrank](https://www.hackerrank.com/domains/algorithms?filters%5Bstatus%5D%5B%5D=unsolved&badge_type=problem-solving), [Interviewbit](https://www.interviewbit.com/courses/programming/) and [Codeforces](https://codeforces.com/problemset) written in **C++** and **JAVA**"); writer.newLine(); writer.newLine();
			writer.write("## What you can find in this repository"); writer.newLine(); writer.newLine();
			writer.write("We have solved quite a number of problems from several topics. See the below table for further details."); writer.newLine(); writer.newLine();
			writer.write("## How to contribute?"); writer.newLine(); writer.newLine();
			writer.write("1. Fork the repository"); writer.newLine();
			writer.write("2. Do the desired changes (add/delete/modify)"); writer.newLine();
			writer.write("3. Make a pull request"); writer.newLine(); writer.newLine();
			writer.write("If you want to update the readme file as well, you have to install [Java](https://www.tutorialspoint.com/java/java_environment_setup.htm) and [Jsoup](https://www.tutorialspoint.com/jsoup/jsoup_environment.htm). Then you can run the [UpdateReadme.java](./UpdateReadme.java) file to update the readme file."); writer.newLine(); writer.newLine();
			writer.write("## When to contribute?"); writer.newLine(); writer.newLine();
			writer.write("1. If there is no solution to a problem in the main branch"); writer.newLine();
			writer.write("2. If your solution is asymptotically faster than the one in the main branch"); writer.newLine();
			writer.write("3. If your algorithm is of the same time complexity but with reduced code size (In this case, comment out the original solution and make a pull request with your solution.)"); writer.newLine();
			writer.write("4. If you have another method of solving the problem which is asymptotically slower than the original method (In this case, comment your solution in the main file and make a pull request.)"); writer.newLine();
			writer.write("5. If you want to update the [UpdateReadme.java](./UpdateReadme.java) file"); writer.newLine(); writer.newLine();
			writer.write("## Algorithms"); writer.newLine(); writer.newLine();
			writer.write("Number of Problems Solved ");//get current date and time and write
			DateTimeFormatter currentDateAndTime = DateTimeFormatter.ofPattern("dd-MMM-yyyy HH:mm:ss");
			LocalDateTime now = LocalDateTime.now();
			writer.write("("+currentDateAndTime.format(now)+")"); writer.newLine(); writer.newLine();
			break;

		case 2:
			writer.write("## Reference"); writer.newLine(); writer.newLine();
			writer.write("* C++"); writer.newLine();
			writer.write("\t* [STL Time Complexity (Detailed)](http://www.cplusplus.com/reference/stl/)"); writer.newLine();
			writer.write("\t* [STL Time Complexity (Summary)](http://john-ahlgren.blogspot.com/2013/10/stl-container-performance.html)"); writer.newLine();
			writer.write("\t* [Data Structure and Algorithms Cheat Sheet](https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md)"); writer.newLine();
			writer.write("* JAVA"); writer.newLine();
			writer.write("\t* [Time Complexity](to-be-updated)"); writer.newLine(); writer.newLine();
			break;
		}
	}
}