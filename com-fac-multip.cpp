#include <iostream>

int main(){
    
    int digital_1,digital_2,option,out_range;//數字1 數字2 選項 用於判斷式否在公倍數時超出範圍
    std::cout << "Plz chose your Option: (1)common factor (2)common multiple: "; // 選擇要顯示兩數的公因數(範圍100內)or1公倍數(範圍100內)
    std::cin >> option; //輸入選項
    
    if(option == 1){ //判斷選項，如果為1，代表選擇公因數
        
        for(int data = 1; data <= 10; data++){//求十組
            std::cout << "plz enter the digital_1: ";
            std::cin >> digital_1; //輸入數字1
            std::cout << "plz enter the digital_2: ";
            std::cin >> digital_2; //輸入數字2

        if(digital_1 > digital_2){ //如果1大於2，執行此判斷式
            for(int i=1; i <= digital_2; i++){ //從1至最小值，因為要取公因數，公因數之最大值也就是到最小值
                if(digital_2%i == 0){ //取餘數，以較小之值判斷是否為餘數0，如果是那就是digital_2的因數
                    if(digital_1%i == 0){//二次過濾，確保為兩數公因數
                        std::cout<<i<<" ";
                    }
                }
            }
        std::cout<<std::endl; //一組資料結束並換行
        }else if(digital_2 > digital_1){
            for(int i=1; i <= digital_1; i++){ //從1至最小值，因為要取公因數，公因數之最大值也就是到最小值
                if(digital_1%i == 0){   //取餘數，以較小之值判斷是否為餘數0，如果是那就是digital_1的因數
                    if(digital_2%i == 0){ //二次過濾，確保為兩數公因數
                        std::cout<<i<<" ";
                    }
                }
            }
        std::cout<<std::endl; //一組資料結束並換行
        }   
    }

    }else if(option == 2){ //判斷選項，如果為2，代表選擇公倍數
        
        for(int data = 1; data <= 10; data++){//求十組
            std::cout << "plz enter the digital_1: ";
            std::cin >> digital_1; //輸入數字1
            std::cout << "plz enter the digital_2: ";
            std::cin >> digital_2; //輸入數字2

        if(digital_2 > digital_1){ //如果2大於1，執行此判斷式
        for(int i=1; i <= 100; i++){ //從1~100
            if(i%digital_2 == 0){ //因為要取公倍數，公倍數之最小值也就是兩數之最大值，用兩數最大值判斷
                if(i%digital_1 == 0){ //二次過濾，確保為兩數公倍數
                    out_range = 1;
                    std::cout<<i<<" "; 
                }
            }
                if(i == 100){ //如果到100時都還沒有公倍數出現
                if (out_range == 0){ //判斷公倍數是否超出100
                    std::cout<<"None\n"; 
                }
            }
         
        }
        out_range = 0; //歸零，給下一組判斷用
        std::cout<<std::endl; //一組資料結束並換行 
        }else if(digital_1 > digital_2){ //如果1大於2，執行此判斷式
            for(int i=1; i <= 100; i++){ //從1~100
                if(i%digital_1 == 0){  //因為要取公倍數，公倍數之最小值也就是兩數之最大值，用兩數最大值判斷
                    if(i%digital_2 == 0){ //二次過濾，確保為兩數公倍數
                            out_range = 1; // 確認已經出現過公倍數，在100內
                            std::cout<<i<<" "; 
                        }
                    }
                if(i == 100){ //如果到100時都還沒有公倍數出現
                    if (out_range == 0){ //判斷公倍數是否超出100
                            std::cout<<"None\n"; 
                        }
                    }   
                }   
            }
            out_range = 0; //歸零，給下一組判斷用
            std::cout<<std::endl; //一組資料結束並換行 
        }
    }
}