#include <iostream>

using namespace std;
void partition(int arr[], int arrSize, int pivot){
    int newArray[arrSize],i;
    for(int a=0; a<arrSize;a++){
        if(arr[a]<pivot){newArray[i]=arr[a];i++}
    }
    newArray[i]= pivot;
    i++;
    
    for(int a=0; a<arrSize;a++){
        if(arr[a]>pivot){newArray[i]=arr[a];i++}
    }
    for(int i)

}


int main()
{
    int array01[]={1,2,3,4,5,6,7,8,9,10};
    partition(array01,10,3);
}

void abc(){
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Number of elements in arr[] is "<< size<<endl;

    int arrSmall[];
    int arrBig[];
    int arrLast[];
    int a=0,b=0,c=0;

    for(int i=0; i<100;i++){
        if(arr[i]>pivot){
            arrBig[a]= arr[i];
            a++;
        }
        else if(arr[i]<pivot){
            arrSmall[b]= arr[i];
            b++;
        }
        else {
            arrLast[c]= arr[i];
            c++;
        }
    }
    arr= arrBig+arrLast+arrSmall;
    cout<<arrBig[]<<endl;
    cout<<arrSmall[]<<endl;
    cout<<arrLast[]<<endl;
}
