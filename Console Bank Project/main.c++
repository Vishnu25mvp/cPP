#include "iostream"
#include "vector"

struct bank
{
        std::string name;
        float  Total_amt;
        std::vector<float> transaction;

};

float withdraw(float amt, float &Total_amt, std::vector<float>  &tran){
        if (amt>Total_amt){
                std::cout<<"Invaild Fund"<<std::endl;
                return 0.0;

        }
        else{
                Total_amt = Total_amt -amt;
                tran.push_back(-amt);
                return 0.0l;
        }


}
float deposit(float amt, float &Total_amt, std::vector<float>  &tran){
        Total_amt = Total_amt +amt;
        tran.push_back(+amt);
        return 0.0l;


}

float transction(std::vector<float> tan){
        for(int i=0;i<=tan.size();i++){
                std::cout<<tan[i]<<std::endl;
        }
        return 0.0;
}





int main(){
        bank b1;
        std::cout<<"Enter Your Name:"<<std::endl;
        std::cin>>b1.name;
        b1.Total_amt =0;
        b1.transaction.push_back(0);
        bool a=true;
        while (a)
        {
                
        
        
        std::cout<<"Enter Your Option : "<<std::endl;
        std::cout<<"1. Balance"<<std::endl;
        std::cout<<"2. Deposit"<<std::endl;
        std::cout<<"3. Withdraw"<<std::endl;
        std::cout<<"4. Transcation"<<std::endl;
        std::cout<<"5. Exit"<<std::endl;
        int i;
        std::cin>>i;

        switch (i)
        {
        case 1:
                std::cout<<b1.name<<"Total Balance"<<b1.Total_amt<<std::endl;
                break;
        case 2:
                float j;
                std::cout<<"Enter Your Amount to be Deposit "<<b1.name<<std::endl;
                std::cin>>j;
                deposit(j,b1.Total_amt,b1.transaction);
                std::cout<<"Your Amount Deposit Sucessfully :"<<j<<std::endl;
                break;

        case 3:
                std::cout<<"Enter Your Amount to be Withdraw "<<b1.name<<std::endl;
                std::cin>>j;
                withdraw(j,b1.Total_amt,b1.transaction);
           
                break;
        case 4:
                std::cout<<b1.name<<"Total Transaction"<<std::endl;
                transction(b1.transaction);
                break;
        
        case 5:
                a = false;
                break;
        
        default:
                std::cout<<"Enter Vaild Number"<<std::endl;
                break;
        }
        }
        return 0;
}
