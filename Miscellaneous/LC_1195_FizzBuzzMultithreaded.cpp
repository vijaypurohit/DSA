/*
https://leetcode.com/problems/fizz-buzz-multithreaded/
*/

class FizzBuzz {
private:
    int n;
    //
    int count;
    mutex mx;//Global variable or place within class
    condition_variable cv;  //A signal that can be used to communicate between functions
public:
    FizzBuzz(int n) {
        this->n = n;
        this->count = 1;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        check(
            [&](int dummy){
                printFizz();
            },
            [&]{
                return (count % 3 == 0 and count % 5 != 0);
            }
        );
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        check(
            [&](int dummy){
                printBuzz();
            },
            [&]{
                return (count % 3 != 0 and count % 5 == 0);
            }
        );
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        check(
            [&](int dummy){
                printFizzBuzz();
            },
            [&]{
                return (count % 3 == 0 and count % 5 == 0);
            }
        );
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        check(
            printNumber ,
            [&]{
                return (count % 3 != 0 and count % 5 != 0);
            }
        );
    }
protected:
    void check(function<void(int)> printFunc, function<bool()> conditionFunc)
    {
        while(count<=n)
        {
            unique_lock<mutex> ul(mx);
            cv.wait(ul, [&]{return (conditionFunc() || count>n);});
            if(count>n) break;
            printFunc(count);
            ++count;
            cv.notify_all();
        }
    }
};