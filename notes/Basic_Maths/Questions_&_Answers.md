# Basic Math - Question & Answer

## **1. Count Digits**

```cpp
void countDigit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n / 10;
        cnt = cnt + 1;
    }
    cout << "Total count value: " << cnt;
}
```

## **2. Reverse a Number**

```cpp
    void reverseNumber(int n)
    {
        int rev = 0;
        cout << "Original number: " << n << endl;
        while (n > 0)
        {
            int lastDigit = n % 10;
            rev = (rev * 10) + lastDigit;
            n = n / 10;
        }
        cout << "Reverce number: " << rev;
    }
```

## **3. Check Palindrome**
``` cpp
    void palindrome(int n)
    {
        int rev = 0;
        int temp = n;
        cout << "Entered Number is: " << n << endl;
        while (n > 0)
        {
            int ld = n % 10;
            n = n / 10;
            rev = (rev * 10) + ld;
        }

        if (temp == rev)
        {
            cout << "It is a Palindrome Number";
        }
        else
        {
            cout << "It is not a Palindrome Number";
        }
    }
```

## **4. GCD Or HCF**

``` cpp
    int GCD = 1;
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            GCD = i;
        }
    }
    cout << GCD;
```

## **5. Armstrong Numbers**

``` cpp
void armstrong(int n)
{
    string digits = to_string(n);
    int length = digits.size();
    int temp = n;
    int total = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        total = total + pow(ld, length);
    }
    if (temp == total)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
```

## **6. Print all Divisors**

``` cpp
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
```

## **7. Check for Prime**

``` cpp
void primeNumber(int n)
{
    int cnt = 0;
    for(int i = 1; i<=n; i++){ 
        if(n%i ==0){ 
            cnt = cnt+1;
        }
    }
    if(cnt==2){
        return true;
    }
    else{ 
        return false; 
    }
}
```