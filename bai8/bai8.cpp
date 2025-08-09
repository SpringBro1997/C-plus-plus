/* Hàm cơ bản trong C++ */
#include <iostream>

/* Các dạng hàm cơ bản C++:
    . Hàm void: có thể có tham số hoặc không, không trả về giá trị
	. Hàm nhận tham số và trả về giá trị (return)
	. Hàm main (trong 1 đoạn code chỉ có 1 hàm main duy nhất)
	. Lưu ý khai báo mảng:
	    * Mảng chỉ được khai báo vào hàm main- hàm cơ bản chỉ thực hiện các câu lệnh xgo giá trị mảng trong hàm main
	    * Độ Dài của Chuỗi Ký Tự
Khi làm việc với chuỗi ký tự trong C++, điều quan trọng là hiểu cách xác định độ dài của chuỗi và cách truyền chuỗi vào hàm.
a. Đọc Độ Dài của Chuỗi
•	Hàm strlen: Hàm strlen từ thư viện <cstring> được sử dụng để tính độ dài của chuỗi ký tự (không bao gồm ký tự null '\0').
 #include <cstring> // Để sử dụng strlen

char str[] = "Hello, World!"; // không thể khai báo biến "char str" khi đo độ dài của chuỗi ('strlen(a)' không chạy)  
int length = strlen(str); // length = 13

•	Ký Tự Null ('\0'): Để strlen hoạt động chính xác, chuỗi ký tự phải được kết thúc bằng ký tự null. Ký tự null không được tính trong độ dài trả về bởi strlen.
b. Đọc Chuỗi từ Bàn Phím
Khi đọc chuỗi ký tự từ bàn phím, bạn có thể sử dụng "std::cin.getline" để đảm bảo rằng bạn đọc toàn bộ dòng và tránh lỗi tràn bộ nhớ.
#include <iostream>
#include <cstring>

int main() {
    char input[81]; // Kích thước mảng đủ lớn để chứa chuỗi

    std::cout << "Enter up to 80 characters: ";
    std::cin.getline(input, 81); // Đọc tối đa 80 ký tự và thêm ký tự null

    int length = strlen(input); // Đọc độ dài chuỗi
    std::cout << "Length of the input string is: " << length << std::endl;

    return 0;
}
 */


// Hàm Không Có Tham Số Và Không Trả Về Giá Trị:
/* Bài 1: In một thông điệp chào mừng
	Yêu cầu: Định nghĩa một hàm tên là printGreeting không nhận tham số và không trả về giá trị. 
	Hàm này sẽ in ra một thông điệp chào mừng như “Welcome to C++ Programming!” Khi gọi hàm này trong hàm main, bạn sẽ thấy thông điệp trên màn hình.
*/

void printGreeting()
{
	std::cout << "Welcome to C++ Programming!" << std::endl;
}

/* Bài 2: In thông báo số lượng sách trong thư viện
    Yêu cầu: Tạo một hàm tên là printBookCount không nhận tham số và không trả về giá trị.
	Hàm này sẽ in thông báo về số lượng sách trong thư viện, ví dụ: “The library has 100 books.” Gọi hàm này từ hàm main để in thông báo ra màn hình.
*/
void printBookCount()
{
	std::cout << "The library has 100 books." << std::endl;
}

// Hàm có tham số và trả về giá trị:
/* Bài 3: Tính tổng hai số nguyên
    Yêu cầu: Viết một hàm addNumbers nhận hai tham số kiểu int và trả về tổng của chúng. 
	         Trong hàm main, gọi hàm addNumbers với hai số nguyên và in kết quả tổng ra màn hình.
*/
int addNumber(int a, int b)
{
	return a+ b;
}
 
/* Bài 4: Tính diện tích hình vuông
    Yêu cầu: Tạo một hàm calculateSquareArea nhận một tham số kiểu int đại diện cho chiều dài cạnh của hình vuông và trả về diện tích. 
	Trong hàm main, gọi hàm calculateSquareArea với một giá trị và in diện tích ra màn hình.
 */
int calculateSquareArea(int a)
{
	return a*a;
}

// Hàm Có Tham Số Và Không Trả Về Giá Trị:
void printNumber (int number){
	std::cout << "Ham Co Tham So Và Khong Tra Ve Gia Tri: " << number << std::endl;
}

/* Bài 5: In thông tin của một sản phẩm
    Yêu cầu: Định nghĩa hàm printProductInfo nhận hai tham số: tên sản phẩm (kiểu string) và giá (kiểu float). 
             Hàm này sẽ in thông tin sản phẩm ra màn hình, ví dụ: “Product: Laptop, Price: $999.99.” Gọi hàm này từ hàm main để kiểm tra kết quả.
	*/
void printProductInfo(std::string a, float b){
	std::cout << "Product: "<<a<<", Price: $"<<b<<std::endl;
}

/* Bài 6: In tất cả các phần tử trong mảng
	Yêu cầu: Tạo một hàm printArrayElements nhận một mảng các số nguyên và kích thước của nó. 
	Hàm này sẽ in tất cả các phần tử của mảng ra màn hình. Trong hàm main, gọi hàm này với một mảng mẫu và kích thước của nó.
*/
void printArrayElements(int arr[], int size) {
	for (int i=0; i< size; i++)
	{
		std::cout<<" "<<arr[i];
	}
}

/* Bài 7: Thay đổi giá trị của biến trong hàm
 Yêu cầu: Định nghĩa một hàm updateValue nhận một tham số kiểu int và thay đổi giá trị của tham số đó thành 50. 
          Trong hàm main, khai báo một biến kiểu int, gọi hàm updateValue với biến này, và in giá trị của biến sau khi gọi hàm. 
		  Bạn sẽ thấy rằng giá trị của biến không bị thay đổi ngoài hàm.
*/
void updateValue( int bai7) {
	bai7= 50;
}

/*  Bài 8: So sánh hai số
       Yêu cầu: Tạo một hàm compareNumbers nhận hai tham số kiểu int và so sánh chúng. 
	   Hàm này sẽ in ra “The numbers are equal” nếu hai số bằng nhau, và “The numbers are different” nếu chúng khác nhau. 
	   Trong hàm main, gọi hàm compareNumbers với hai số khác nhau và hai số giống nhau để kiểm tra kết quả.
 */
void compareNumbers(int m, int n)
{
	if (m == n)
	{
		std::cout << "The numbers are equal" << std::endl;
	}
	else
	{
		std::cout << "The numbers are different" << std::endl;
	}
}

/* Bài 9: Thay đổi giá trị của biến trong hàm
    Yêu cầu: Viết hàm increaseValue nhận một tham số kiểu int theo tham chiếu và tăng giá trị của tham số đó thêm 10. 
    Trong hàm main, khai báo một biến kiểu int, gọi hàm increaseValue với biến này, và in giá trị của biến sau khi gọi hàm. 
	Bạn sẽ thấy rằng giá trị của biến đã thay đổi.
 */
void increaseValue9(int& g) //hàm chiếu là 1 hằng số(const)-
{   
	g= 100;
	g+=10;
}

/* Bài 10: Hoán đổi hai giá trị
	Yêu cầu: Tạo một hàm swapValues nhận hai tham số kiểu int theo tham chiếu và hoán đổi giá trị của chúng. 
    Trong hàm main, khai báo hai biến kiểu int, gọi hàm swapValues với hai biến này, và in giá trị của hai biến sau khi hoán đổi.
*/
void swapValues (int& j, int& k) //Tham chiếu là 1 hằng số (const)
{
	int temp;
	temp= j;
	j= k;
	k= temp;
	std::cout<<"j= "<<j<<std::endl;
	std::cout<<"k= "<<k<<std::endl;
}

/* Bài 11: In giá trị không thay đổi
	Yêu cầu: Định nghĩa một hàm nhận một tham số kiểu int với từ khóa const và in giá trị của tham số đó ra màn hình. 
	Trong hàm main, khai báo một biến kiểu int và gọi hàm displayValue với biến này. 
	Đảm bảo rằng giá trị của tham số không bị thay đổi trong hàm.
 */
void displayValue (const int bai11)
{
	std::cout<<"bai11= "<<bai11<<std::endl;
}

/* Bài 12: Tính tổng của các giá trị trong mảng
•	Yêu cầu: 
        Viết một hàm sumArray nhận một mảng kiểu int và kích thước của mảng với tham số mảng là hằng (const). 
        Hàm này sẽ tính tổng của tất cả các phần tử trong mảng và trả về kết quả. 
		Trong hàm main, khai báo một mảng, gọi hàm sumArray với mảng và kích thước của nó, và in tổng ra màn hình.
*/
void sumArray(int array12[], const int size) {
	int sum = 0;
	for (int i= 0; i< size; i++)
	{
		sum= array12[i]+ sum;
	}
	std::cout<<"sum= "<<sum<<std::endl;
}

/* Bài 13: Tính diện tích hình chữ nhật với tham số mặc định
   Yêu cầu: 
        Định nghĩa hàm calculateArea nhận hai tham số kiểu int: chiều dài và chiều rộng của hình chữ nhật, với chiều rộng có giá trị mặc định là 5. 
		Hàm này sẽ tính diện tích của hình chữ nhật và trả về kết quả. 
		Trong hàm main, gọi hàm calculateArea với một giá trị duy nhất và với cả hai giá trị để kiểm tra kết quả.
 */
int calculateArea (int cd, int cr= 5 ) 
{
	return cd*cr;
}

int	main()
{
	printGreeting();   // in ra giá trị của hàm void
	printBookCount(); // in ra giá trị của hàm void
    
	// trả về hàm addNumber
	int sum= addNumber(5,7);
	std::cout<<"sum: "<<sum<<std::endl;

	// trả về hàm calculateSquareArea
	int plus= calculateSquareArea(8);
	std::cout<<"plus: "<<plus<< std::endl;
    
	printNumber(100);// bài 4
	printProductInfo ("Laptop", 99.99);

	//Bài 6:
	int arr[]= {0,1,2,3};
	int size= sizeof(arr)/sizeof(arr[0]);
	printArrayElements(arr,size);

	//bài7:
	int num7= 9;
	updateValue(num7);
	std::cout<<"gia tri cua num7= "<<num7<<std::endl; // giá trị num7 vẫn bằng 9, không thay đổi giá trị biến

	//bài 8:
	compareNumbers(7,7);
	compareNumbers(9,7);

	//bài 9:
	int num9= 20;
	increaseValue9(num9); // giá trị num9 
	std::cout<<"num9= "<<num9<<std::endl;

	//bài 10: Hoán đổi giá trị: phải sử dụng cin
	//swapValues(8, 10); // không thể nhận giá trị là hằng số vì "void swapValues (int& j, int& k)" là hàm tham chiếu và chỉ thay đồi giá trị của biến không thể thay đổi giá trị của hằng số
	int e;
	int f;
	std::cout<<"nhap gia tri e: ";
	std::cin>>e;
	std::cout << "nhap gia tri f: ";
	std::cin >> f;
	swapValues(e,f); // hoán đổi giá trị e và f

	//bài 11:
	int a11= 90;
	displayValue (a11);

	//bài 12:
	int arr12[]={1,2,3,4};
	sumArray(arr12, 4);
   
	//bài 13:
	int calculateArea1= calculateArea (4);
	std::cout << "calculateArea= " << calculateArea1 << std::endl;
}