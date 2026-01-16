int main() {
    int x = 10;
    float y = 3.14;
    char z = 'A';
    
    //Hàm void có thể truy cập vào kiểu dữ liệu khác nhau
    void *ptr;
    
    ptr = &x;
    cout << "Giá trị int: " << *(int*)ptr << endl;
    
    ptr = &y;
    cout << "Giá trị float: " << *(float*)ptr << endl;
    
    ptr = &z;
    cout << "Giá trị char: " << *(char*)ptr << endl;
    
    return 0;
}