
/*TEAM NO.-2
PROJECT- BANK MANAGEMENT SYSTEM
1. GALIB, MD. AMANULLAH      15-30188-2*/

#include <iostream>
#include<fstream>
using namespace std;

void newaccount();
void space(int f);
void sleep(int n);
int t = 1000;
int j;
int *b;
int taka;
char n[40];
int c,kk;

class bank
{
   int pri,t;
   public:

    int fix(int a,int p);
    int blnct(int a,string u);
     void set(int w,int q)
    {
        pri=w;
        t=q;
    }
    friend class prince;

};
 int bank::fix(int a,int p)
{
    if(a==101 && p==1111)
    {
      cout<<endl<<"\tAccount Holder : Galib"<<endl<<endl;
      b=new int(2000);
      return *b;
    }

     if(a==102 && p==2222)
    {
        cout<<endl<<"\tAccount Holder : Samim"<<endl<<endl;
       b=new int(1500);
        return *b;
    }

     if(a==103 && p ==3333)
    {
       cout<<endl<<"\tAccount Holder : Tanzim"<<endl<<endl;
      b=new int(4000);
        return *b;
    }

     if(a==104 && p==4444)
    {
       cout<<endl<<"\tAccount Holder : Rasel"<<endl<<endl;
       b=new int(3000);
        return *b;
    }

     if(a==105 && p==5555)
    {
        cout<<endl<<"\tAccount Holder : Abrar"<<endl<<endl;
       b=new int(2500);
        return *b;
    }
     if(a==106)
     {
         cout<<endl<<"\tAccount Holder : "<<n<<endl<<endl;
        b=new int (1000);
         return *b;
     }
    else
    {
        cout<<endl<<"\tInvalid Account Number or Password"<<endl<<endl;
    }

    delete(b);

}

int bank::blnct(int a,string u)
{
    if(a==101 && u=="galib")
    {
      taka=2000;
      return taka;
    }

     if(a==102 && u == "samim")
    {
        taka=1500;
        return taka;
    }

     if(a==103 && u == "tanzim")
    {
        taka=4000;
        return taka;
    }

     if(a==104 && u == "rasel")
    {
         taka=3000;
         return taka;
    }

     if(a==105 && u == "abrar")
    {
         taka=2500;
         return taka;
    }
     if(a==106 && u =="n")
     {
           taka=1000;
          return taka;
     }
}

class prince
{
    public:
    void run(bank c)
    {
        cout<<endl<<"\tSimple Rate of Interest : "<<c.pri*c.t*7/100<<endl;
    }
};

class newac : public bank
{
    public:
    int w,k,q,u;
    void derive()
    {
       cout<<endl<<"\tDo you Want to Create an account ? "<<endl;
       cout<<"\t1.YES"<<"     "<<"2.NO"<<endl;
       cout<<endl<<"\tChoose Your Option : ";
       cin>>w;
       if(w==1)
       {
           cout<<endl<<endl<<"\tThere are Some Hard and Fast Rules in AIUB Bank"<<endl;
           cout<<"\tYou have to Pass in an Exam to get Chance for Creating an Account"<<endl;
           cout<<"\tDo you agree in this condition ? "<<endl;
           cout<<"\t1.YES"<<"     "<<"2.NO"<<endl;
           cout<<"\tChoose Your Option : ";
           cin>>k;
    if(k==1)
       {
    cout<<endl<<endl<<"\tHere is your questions"<<endl;
    cout<<endl<<"\tQuestion 1 : "<<"Which one is the best Private University in the world ? "<<endl;
    cout<<endl<<"\t1.AIUB"<<"      "<<"2.OXFORD"<<endl;
    cout<<"\tChoose Your Option : ";
     cin>>q;
     if(q==1)
     {
         cout<<endl<<"\tYour Answer is Correct"<<endl;
     }
    else
    {
        cout<<endl<<"\tYour answer is Wrong"<<endl;
    }

     cout<<endl<<"\tQuestion 2 : "<<"Which one is the best Department in AIUB ? "<<endl;
     cout<<endl<<"\t1.EEE"<<"      "<<"2.CS"<<endl;
     cout<<"\tChoose Your Option : ";
     cin>>u;
     if(u==2)
     {
         cout<<endl<<endl<<"\tYour Answer is Correct"<<endl;
     }
    else
    {
        cout<<endl<<"\tYour Answer is Wrong"<<endl;
    }

       }
     if(q==1&&u==2)
     {
         cout<<endl<<"\tYou got 100% Marks"<<endl;
         cout<<"\tYou are strongly eligible to Open an account"<<endl;
         cout<<"\tGive Necessary Documents in the Office within Tow Days"<<endl;
         cout<<"\tPlease Visit Our Website"<<endl;
         cout<<"\twww.aiub.bank.com"<<endl<<endl;
         newaccount();
     }

     else if(q==1&&u==1)
     {
        cout<<endl<<"\tYou got 50% Marks"<<endl
        <<"\tYou are weakly eligible to Open an account"<<endl
        <<"\tGive Necessary Documents in the Office within Tow Days"<<endl;
        cout<<"\tPlease Visit Our Website"<<endl;
        cout<<"\twww.aiub.bank.com"<<endl<<endl;
        newaccount();
     }

      else if(q==2&&u==2)
      {
          cout<<endl<<"\tYou got 50% Marks"<<endl
          <<"\tYou are weakly eligible to Open an account"<<endl
          <<"\tGive Necessary Documents in the Office within Tow Days"<<endl;
          cout<<"\tPlease Visit Our Website"<<endl;
          cout<<"\twww.aiub.bank.com"<<endl<<endl;
          newaccount();
      }

      else if(q==2&&u==1)
      {
          cout<<endl<<"\tYou got 0% Marks"<<endl;
          cout<<"\tYou are Rejected to Open an account"<<endl;
          cout<<"\tRead , Then Come"<<endl<<endl;
      }

       }
       else
       {
           cout<<"\tClosing the Program , Thank You Sir"<<endl;
       }

    }
};

void newaccount()
{
    char fn[40];
    char mn[40];
    char ocu[40];
    int phn;

    cout<<"\tPlease Fill up the Form below"<<endl<<endl;
    cout<<"\tName : ";
    cin>>n;
    cout<<endl<<"\tFather's Name : ";
    cin>>fn;
    cout<<endl<<"\tMother's Name : ";
    cin>>mn;
    cout<<endl<<"\tOccupation : ";
    cin>>ocu;
    cout<<endl<<"\tPhone Number : ";
    cin>>phn;
    cout<<endl<<"\tYou have to Give 1000 taka to Valid Your Account"<<endl;
    cout<<"\tSMS sent to your Phone Number"<<endl;
    cout<<"\tPayment Code : ";
    cin>>j;

    if(j==6535)
  {
              cout<<"\tProcessing............"<<endl<<endl<<endl;
              cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;

            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

           cout<<endl<<"\tYour Account has been Created"<<endl;
           cout<<"\tWelcome to AIUB Bank"<<endl<<endl;
           cout<<"\tName \t Acc. no\tPassword"<<endl<<"\t"<<n<<"      "<<"106"<<"\t\t6666"<<endl;

  }
    else
  {
      cout<<"\tInvalid Payment Code"<<endl;
  }
}

void sleep(int n)
            {

                for (int i=0; i<n*10000; i++)
                    {}

            }

void space(int f)
    {
        for(int i=0;i<f;i++)
        {
            cout<<"\t";
        }
    }

int main()
{

       bank ba;
       newac na;
       int y;
       int z;
       int ret;
       int aa;
       string newn;
       int pet;
       int ta;
       int g;
       char f[100];
    ofstream out("test.txt",ios::app);
    if(out)
   {
    cout<<"\tInsert Your Name : ";
    cin>>f;
    out.close();
   }
   else
   {
       cout<<"\tFile can't open"<<endl;
   }

    ifstream in("test.txt");
    in.get(f,100);
    cout<<f;
    in.close();

       cout<<endl<<endl<<"\tInitial Menu"<<endl;
       cout<<"\t1.Account Holder"<<endl;
       cout<<"\t2.New Account"<<endl;
       cout<<"\tChoose Your Option : ";
       cin>>g;
       if(g==1)
    {
        cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;

            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

        cout<<endl<<"\tEnter your Account Number : " ;
       cin>>y;
       cout<<"\tEnter your password for further process : ";
       cin>>z;
       ret=ba.fix(y,z);

    if( y==101&&z==1111 ||  y==102&&z==2222 ||  y==103&&z==3333 ||  y==104&&z==4444 ||  y==105&&z==5555)
  {
       do
   {
        cout<<endl<<"\tMAIN MENU"<<endl<<endl;
        cout<<"\t1.Balance Check"<<endl;
        cout<<"\t2.Withdraw Money"<<endl;
        cout<<"\t3.Deposit Money"<<endl;
        cout<<"\t4.All Account Holders"<<endl;
        cout<<"\t5.Simple Interest Calculate"<<endl;
        cout<<"\t6.Balance Transfer"<<endl;
        cout<<"\tChoose your option: " ;
        cin>>c;


        if(c==1)
        {
              cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
               t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

            cout<<endl<<"\tYou have "<<ret<<" taka in your account"<<endl;
            cout<<endl<<"\tProcess Completed"<<endl<<endl;
        }

         else if(c==2)
        {
            int f;
            cout<<endl<<"\tWithdraw Amount: ";
            cin>>f;
            if(f>0&&f<ret)
            {
          cout<<endl<<"loading..........\t...........\t...........\t.........."<<endl;
                   t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

                ret-=f;
                cout<<endl<<"\tYour Current Balance is "<<ret<<" taka"<<endl;
                cout<<endl<<"\tProcess Completed"<<endl<<endl;
            }
            else
            {
                cout<<endl<<"\tInsert Amount Exceed Your Current balance or Input Error"<<endl;
            }
        }

       else if(c==3)
        {
            int m;
            cout<<endl<<"\tEnter the Deposit amount: ";
            cin>>m;
           if(m>0)
           {

            cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
                t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }

             space(1000);

               ret+=m;
               cout<<endl<<"\tYour Current Balance is: "<<ret<<" taka"<<endl;
               cout<<endl<<"\tProcess Completed"<<endl<<endl;
           }
           else
           {
               cout<<endl<<"\tError Input"<<endl;
           }
        }

        else if(c==4)
  {
           cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
              t=t+1000;
            while (t!=0)
            {
                cout<<">";
                sleep(100);
                t--;
            }
             space(1000);

    cout<<endl<<"\tSee the list of All Account Holders"<<endl;
    cout<<endl<<"\t  NAME     ACCOUNT NO."<<endl;
    cout<<endl<<"\t1.Galib       101"<<endl;
    cout<<endl<<"\t2.Samim       102"<<endl;
    cout<<endl<<"\t3.Tanzim      103"<<endl;
    cout<<endl<<"\t4.Rasel       104"<<endl;
    cout<<endl<<"\t5.Abrar        105"<<endl;
    cout<<endl<<"\t6. "<<n<<"           106"<<endl<<endl;

  }

  else if(c==5)
  {
       prince p;
     int w,q;
    cout<<"\tInsert the Principle : ";
    cin>>w;
    cout<<"\tInsert the time period(Year) : ";
    cin>>q;
    if(w<10000)
    {
        cout<<"\tYour Balance is Insufficient for Fix Deposit\n\n";
    }
    else
    {
               t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);
             ba.set(w,q);
             p.run(ba);
    }

  }

   else if(c==6)
     {
         cout<<endl<<"\tInsert Transfering Account Number : ";
         cin>>aa;
            if(aa==y)
        {
            cout<<endl<<endl<<"\tYou can't Transfer Money in your own account"<<endl<<endl;
        }
        else
        {
         cout<<"\tInsert Account Holder's Name : ";
         cin>>newn;
         pet=ba.blnct(aa,newn);

         if(aa==101 && newn=="galib" || aa==102 && newn=="samim" || aa==103 && newn=="tanzim" || aa==104 && newn=="rasel" || aa==105 && newn=="abrar" || aa==106 && newn=="n")
       {
         cout<<endl<<endl<<"\tYour Account Balance  : "<<ret<<endl;
         cout<<"\tTransfer Amount : ";
         cin>>ta;
         ret-=ta;

         cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
                 t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

         cout<<endl<<"\tYour Current Balance : "<<ret<<endl;
         cout<<"\tTransfered Account's Balance was : "<<pet<<endl;
         pet+=ta;
         cout<<"\tTransfered Account's Current Balance : "<<pet<<endl;
       }
         else
         {
             cout<<endl<<"\tInvalid Account Number or Name"<<endl<<endl;
         }

        }
     }

         cout<<"\tDo you want to do anything else ? "<<endl;
         cout<<"\t1.YES    2.NO"<<endl;
         cout<<"\tChoose Your Option : ";
         cin>>kk;
      }while(kk==1);

    }

        }

    if(g==2)
    {

         int kg;

          na.derive();

    if(j==6535)
     {
          cout<<"\tEnter your Account Number : " ;
          cin>>y;
          cout<<"\tEnter your password for further process : ";
          cin>>z;
          ret=ba.fix(y,z);
          if( y==106 && z==6666 )
     {
          cout<<"\tDo you want to do anything else ?"<<endl;
          cout<<"\t1.YES\t2.No"<<endl;
          cout<<"\tChoose your option : ";
          cin>>kg;
          if(kg==1)
          {

    do
   {
        cout<<endl<<"\tMAIN MENU"<<endl<<endl;
        cout<<"\t1.Balance Check"<<endl;
        cout<<"\t2.Withdraw Money"<<endl;
        cout<<"\t3.Deposit Money"<<endl;
        cout<<"\t4.All Account Holders"<<endl;
        cout<<"\t5.Simple Interest Calculate"<<endl;
        cout<<"\t6.Balance Transfer"<<endl;
        cout<<"\tChoose your option: " ;
        cin>>c;


        if(c==1)
        {
             cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
                t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

            cout<<endl<<"\tYou have "<<ret<<" taka in your account"<<endl;
            cout<<endl<<"\tProcess Completed"<<endl<<endl;
        }


         else if(c==2)
        {
            int f;
            cout<<endl<<"\tWithdraw Amount: ";
            cin>>f;
            if(f>0&&f<ret)
            {
              cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
                 t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

                ret-=f;
                cout<<endl<<"\tYour Current Balance is "<<ret<<" taka"<<endl;
                cout<<endl<<"\tProcess Completed"<<endl<<endl;
            }
            else
            {
                cout<<"\tInsert Amount Exceed Your Current balance  or Input Error"<<endl;
            }
        }
       else if(c==3)
        {
            int m;
            cout<<endl<<"\tEnter the Deposit amount: ";
            cin>>m;
           if(m>0)
           {
              cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
               t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

               ret+=m;
               cout<<endl<<"\tYour Current Balance is: "<<ret<<" taka"<<endl;
               cout<<endl<<"\tProcess Completed"<<endl<<endl;
           }
           else
           {
               cout<<"\tError Input"<<endl;
           }
        }


        else if(c==4)
  {

           cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
               t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

    cout<<endl<<"\tSee the list of All Account Holders"<<endl;
    cout<<endl<<"\t  NAME     ACCOUNT NO."<<endl;
    cout<<endl<<"\t1.Galib       101"<<endl;
    cout<<endl<<"\t2.Samim       102"<<endl;
    cout<<endl<<"\t3.Tanzim      103"<<endl;
    cout<<endl<<"\t4.Rasel       104"<<endl;
    cout<<endl<<"\t5.Abar        105"<<endl;
    cout<<endl<<"\t6."<<n<<"      106"<<endl<<endl;
  }

    else if(c==5)
  {
       prince p;
     int w,q;
    cout<<"\tInsert the Principle : ";
    cin>>w;
    cout<<"\tInsert the time period(Year) : ";
    cin>>q;
    if(w<10000)
    {
        cout<<"\tYour Balance is Insufficient for Fix Deposit"<<endl;
    }
    else
    {
            t=t+1000;
            while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

          ba.set(w,q);
          p.run(ba);
    }

  }

     else if(c==6)
     {
         cout<<endl<<"\tInsert Transfering Account Number : ";
         cin>>aa;
          if(aa==y)
        {
            cout<<endl<<"\tYou can't Transfer Money in your own account"<<endl<<endl;
        }

        else
        {
         cout<<"\tInsert Account Holder's Name : ";
         cin>>newn;
         pet=ba.blnct(aa,newn);

          if(aa==101 && newn=="galib" || aa==102 && newn=="samim" || aa==103 && newn=="tanzim" || aa==104 && newn=="rasel" || aa==105 && newn=="abrar" || aa==106 && newn=="n")
        {
         cout<<"\tYour Account Balance  : "<<ret<<endl;
         cout<<"\tTransfer Amount : ";
         cin>>ta;
         ret-=ta;
         cout<<endl<<"\tloading..........\t...........\t...........\t.........."<<endl;
                  t=t+1000;
             while (t!=0)
            {
                cout<<">";
                 sleep(100);
                t--;
            }
             space(1000);

         cout<<endl<<"\tYour Current Balance : "<<ret<<endl;
         cout<<"\tTransferd Account's Balance was : "<<pet<<endl;
         pet+=ta;
         cout<<"\tTransferd Account's Current Balance : "<<pet<<endl;
        }
         else
         {
             cout<<endl<<"\tInvalid Account Number or Name"<<endl<<endl;
         }

        }

     }
         cout<<"\tDo you want to do anything else ? "<<endl;
         cout<<"\t1.YES    2.NO"<<endl;
         cout<<"\tChoose Your Option : ";
         cin>>kk;
      }while(kk==1);


          }

        }

     }

        }

    return 0;
}
