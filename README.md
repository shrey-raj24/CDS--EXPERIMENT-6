# Experiment---6

### Aim 
To study and implement C++ deciision making statements loops.<br> 

### Software 
Visual Studio Code<br> 

### Theory 
(1) For loop - It allows us to repeat a set of instructions for a specific number of time.  <br> 
              Syntax: <br> 
              for ( initialization; test condition; updation) <rb> 
              { <br> 
              // body of for loop <br> 
              } <br> 
          (2) While loop - It is used in situations where we do not know the exact number of iterations of the loop beforehand. <br> 
              Syntax: <br> 
              while (test_expression) <br>
              { <br> 
              // statements <br> 
               update_expression; <br> 
              } <br> 
          (3) Do while loop - It is same as the while loop but tha difference is that in the do-while loop the condition is tested at the end of the loop body. 
          
         
             Syntax:
              do
              { 
              // loop body
              update_expression;  
              } 
              while (test_expression); 
### Code:<br> 

(A) <br> 
```
#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=0;i<10;i++) {
    cout<<"HELLO WORLD("<<i+1<<")"<<"\n";
    }
    return 0;
}
```

(B)<br>
```
#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number: "<<"\n";
    cin>>i;
    while(i<=10)
    {
        cout<<" "<<"\n"<<i++;
    
    }
    return 0;
}
```

(C)<br>
```
#include<iostream> 
using namespace std;

int main() 
{
    int a=0;
    do {
        cout<< a << "\n";
        a=a+2;
    }
    while (a<=50); 
    return 0; 
}
```

(D)<br>
```
#include<iostream>
using namespace std;

int main()
{
    int a[3][3],s=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter any number for index number: "<<i<<j;
            cin>>a[i][j];
            s=s+a[i][j];
        }
    }
    cout<<"The sum of elements of matrix is:"<<s;
    return 0;
}
```

(E)<br> 
```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        int j = 1;
        while (j <= 5) {
            cout << "* ";
            ++j;
        }
        cout << endl;
        ++i;
    }

    return 0;
}
```

(F) <br> 
```
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            cout << "* ";
            ++j;
        } while (j <= 6);
        cout << endl;
        ++i;
    } while (i <= 6);

    return 0;
}
```

(G)<br> 
```

#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=(n-1);j++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        }
        cout<<"end1";
    
} 
```

### Output: <br> 

(A)<br> 
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6A.png)

(B)<br>
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6B.png)

(C)<br>
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6C.png)

(D)<br>
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6D.png)

(E)<br>
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6E.png)

(F)<br>
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6F.png)

(G)<br> 
![](https://github.com/Shloka-Patel/Experiment---6/blob/main/Output_6(G)%20.png) 

### Conclusion 
I learnt about different deciosion making loops of C++ and made programs using those statements like how to print counting numbers or even numbers, till a certain range, matrix operations and many other programs. <br> 
