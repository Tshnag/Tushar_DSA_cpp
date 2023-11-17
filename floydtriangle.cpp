#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

void patternThird(int n)
{
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << col << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    cout << endl;
}

void patternThirdReverse(int n)
{
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << n - col + 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    cout << endl;
}

void patternFourth(int n)
{

    int row = 1;

    // while(row < n){
    //     int col=1;
    //     while(col <= n){
    //         cout<<(col+(row*n))<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    int j = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << j << " ";
            j++;
            col++;
        }
        cout << endl;
        row++;
    }

    cout << endl;
}

void patternFifthStar(int n)
{

    int row = 1;
    while (row <= n)
    {   
        int col=1;
        while(col <= row){
            cout<<"*"<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}

void patternSixth(int n){
    int row=1;
    while(row <= n){
        int col=1;
        while(col <= row){
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternSeventh(int n){

    int row=1;
    int j=1;
    while(row <= n){
        int col=1;
        while(col <= row){
            cout<<j<<" ";
            j++;
            col++;
        }
        cout<<endl;
        row++;
    }

    cout<<endl;
}

void patternEighth(int n){

    //int row=1;
    // while(row <= n){
        
    //     int col=1;
    //     int value=row;
    //     while(col <= row){
    //         cout<<value<<" ";
    //         value++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<(row+col-1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}

void patternNinth(int n){

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;

}


void patternTenth(int n){

    int row=1;
    // while(row <= n){
    //     int col=1;
    //     while(col <= n){
    //         switch (row)
    //         {
    //         case 1:
    //             cout<<"A"<<" ";
    //             break;
    //         case 2:
    //             cout<<"B"<<" ";
    //             break;
    //         case 3:
    //             cout<<"C"<<" ";
    //             break;
            
    //         default:
    //             break;
    //         }
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    while(row <= n){
        int col=1;
        while(col <= n){
            char ch= 'A' + row - 1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;

}

void patternTenPointOne(int n){
    int row=1;
    char ch='A';
    while(row <= n){
        int col=1;
        while(col <= n){
            cout<<ch<<" ";
            ch = ch + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternEleven(int n){
    int row=1;
    while(row <= n){
        int col=1;
        while(col <= n){
            char ch = 'A'+col-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternTwelve(int n){

    int row=1;
    while(row <= n){
        int col=1;
        while(col <= n){
            char ch='A' + row + col - 2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;

}

void patternThirteen(int n){
    int row=1;
    while(row <= n){
        int col=1;
        while(col <= row){
            char ch= 'A' + row - 1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternFourteen(int n){

    int row=1;
    char ch='A';
    while(row <= n){
        int col=1;
        while(col <= row){
            cout<<ch<<" ";
            ch = ch + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;

}

void patternFifteen(int n){

    int row=1;
    while(row <= n){
        int col=1;
        char ch = 'A' + n - row;
        while(col <= row){
            cout<<ch<<" ";
            ch = ch + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;

}

//Interview Question Solved,
void patternFifteenAndOne(int n){
    int row=1;
    while(row <= n){
        int col=1;
        while(col <= n+1){
            if(col <= (row+1)){
                cout<<"@"<<" ";
                col++;
            }
            else{
                cout<<"*"<<" ";
                col++;
            }
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternFifteenAndTwo(int n){
    int row=1;
    while(row <= n){
        int col=1;
        while(col <= n){
            if(col <= (row)){
                cout<<"@"<<" ";
                col++;
            }
            else{
                cout<<"*"<<" ";
                col++;
            }
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternSixteen(int n){
    int row=1;
    while(row <= n){
        int col1=n-row;;
        while(col1 != 0){
            //by if-else condition
            // if(col <= (n-row)){
            //     cout<<" ";
            //     col++;
            // }
            // else{
            //     cout<<"*";
            //     col++;
            // }
            cout<<" ";
            col1--;
        }
        int col2 = n-row;
        while(col2 < n){
            cout<<"*";
            col2++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}


void patternSeventeen(int n){
    int row=1;
    while(row <= n){
        int col=1;
        while (col <= (n-row+1))
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
        
    }
    cout<<endl;
}

void patternEighteen(int n){
    int row=1;
    while(row <= n){
        int space = 1;
        while(space <= row-1){
            cout<<" ";
            space++;
        }
        int col=row;
        while(col <= n){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}

void patternNinteen(int n){
    int row=1;
    while(row <= n){
        int space=1;
        while(space <= row-1){
            cout<<" ";
            space++;
        }
        int col=n-row+1;
        while(col){
            cout<<row;
            col--;
        }
        cout<<endl;
        row++;
    }
    cout<<endl;
}

//Special
void patternTwenty(int n){
      int row=1;
      while(row <= n){

        //Printing space
        int space=1;
        while(space <= n-row){
            cout<<" ";
            space++;
        }

        //printing 1st triangle
        int col=1;
        while(col <= row){
            cout<<col;
            col++;
        }

        //printing 2nd triangle
        int start=row-1;
        while(start != 0){
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;
      }
      cout<<endl;
}





//Dabang pattern
void patternTwentyone(int n){
    int row=1;
    while(row <= n){
        //1st no.
        int start1=1;
        while(start1 <= n-row+1){
            cout<<start1;
            start1++;
        }
        //1st star.
        int star1 = row-1;
        while(star1 != 0){
            cout<<"*";
            star1--;
        }        

        //2nd star
        int star2=1;
        while(star2 <= row-1){
            cout<<"*";
            star2++;
        }
        //2nd no.
        int start2=n-row+1;
        while(start2 != 0){
            cout<<start2;
            start2--;
        }

        cout<<endl;
        row++;
    }
    cout<<endl;
}

//pyramid
void patternTwentytwo(int n){
    //by while loop
    int row=1;

    while(row <= n){
        int space1=1;
        while(space1 <= n-row){
            cout<<" ";
            space1++;
        }

        //star
        int star=1;
        while(star <= 2*row-1){
            cout<<"*";
            star++;
        }

        //2nd space
        int space2 = n-row;
        while(space2 != 0){
            cout<<" ";
            space2--;
        }

        cout<<endl;
        row++;
    }
}









int main()
{
    int n;
    cin >> n;

    // patternThird(n);
    // patternThirdReverse(n);
    // patternFourth(n);
    // patternFifthStar(n);
    // patternSixth(n);
    // patternSeventh(n);
    // patternEighth(n);
    // patternNinth(n);
    // patternTenth(n);
    // patternTenPointOne(n);
    // patternEleven(n);
    // patternTwelve(n);
    // patternThirteen(n);
    // patternFourteen(n);
    // patternFifteen(n);
    // patternFifteenAndOne(n);
    // patternFifteenAndTwo(n);
    // patternSixteen(n);
    // patternSeventeen(n);
    // patternEighteen(n);
    // patternNinteen(n);
    //patternTwenty(n);
    patternTwentyone(n);
    patternTwentytwo(n);


    // while (row <= n)
    // {
    //     int col = 1;
    //     for(int i=0; i<n+1;i++){
    //         if(col <= i+row){
    //             cout<<"@";
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         i++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    return 0;
}