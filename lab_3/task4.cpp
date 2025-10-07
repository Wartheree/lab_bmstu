//
// Created by danil on 02.10.2025.
//
#include <iostream>
void remove_negative(int*&, int&);
int main() {
    int n;
    std::cout<<"length of array = ";std::cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {std::cout<<"element " << i << " "; std::cin >> arr[i]; };
    remove_negative(arr,n);
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    delete [] arr;
    return 0;
}

void remove_negative(int*& arr, int& length) {
    for (int i =0; i < length; i++) {
        if (arr[i]<0) {
            //перебрасывает отрицательный элемент в конец
            for (int x=i; x<length-1;x++) {
                std::swap(arr[x],arr[x+1]);
            }
            //создает новый динамический массив без последнего элемента
            int *new_arr = new int[length-1];
            for (int i=0; i<length-1; i++) {
                new_arr[i] = arr[i];
            }
            delete [] arr;
            length--;
            arr = new_arr;
        }
    }
}