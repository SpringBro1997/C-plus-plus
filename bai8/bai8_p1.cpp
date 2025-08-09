/* 	Bài 9: Luyện tập
 
1. Hàm Không Có Tham Số Và Không Trả Về Giá Trị
1.	Bài Tập 1: Định nghĩa một hàm printWelcomeMessage không nhận tham số và không trả về giá trị. Hàm này sẽ in ra màn hình thông điệp chào mừng: “Welcome to the C++ Programming World!”.
2.	Bài Tập 2: Viết một hàm printFavoriteNumber không nhận tham số và không trả về giá trị. Hàm này sẽ in ra một số nguyên mà bạn yêu thích, ví dụ: “My favorite number is 7.”.
3.	Bài Tập 3: Tạo hàm printCurrentYear không nhận tham số và không trả về giá trị. Hàm này sẽ in ra năm hiện tại, ví dụ: “The current year is 2024.”.
4.	Bài Tập 4: Viết hàm printGreeting không nhận tham số và không trả về giá trị. Hàm này sẽ in một thông điệp chào đơn giản, ví dụ: “Hello, World!” và thêm một dòng mới.
 
2. Hàm Có Tham Số Và Trả Về Giá Trị
1.	Bài Tập 1: Định nghĩa hàm addNumbers nhận hai tham số kiểu int và trả về tổng của chúng. Trong hàm main, gọi hàm addNumbers với hai số nguyên và in kết quả ra màn hình.
2.	Bài Tập 2: Tạo hàm calculateRectangleArea nhận hai tham số kiểu int đại diện cho chiều dài và chiều rộng của hình chữ nhật và trả về diện tích của nó. Trong hàm main, gọi hàm và in diện tích ra màn hình.
3.	Bài Tập 3: Viết hàm multiply nhận hai tham số kiểu float và trả về tích của chúng. Gọi hàm multiply với hai số thực và in kết quả ra màn hình.
4.	Bài Tập 4: Định nghĩa hàm calculateCircleArea nhận một tham số kiểu float là bán kính của hình tròn và trả về diện tích của nó (S = π * r²). Gọi hàm và in diện tích ra màn hình.
 
 3. Hàm Có Tham Số Và Không Trả Về Giá Trị
1.	Bài Tập 1: Định nghĩa hàm printFullName nhận hai tham số: tên (kiểu string) và họ (kiểu string). Hàm này sẽ in ra tên đầy đủ, ví dụ: “John Doe”.
2.	Bài Tập 2: Viết một hàm printSum nhận hai tham số kiểu int, tính tổng của chúng và in kết quả ra màn hình.
3.	Bài Tập 3: Tạo hàm printRectangleDimensions nhận hai tham số kiểu int đại diện cho chiều dài và chiều rộng của một hình chữ nhật. Hàm này sẽ in ra kích thước của hình chữ nhật, ví dụ: “Length: 5, Width: 10”.
4.	Bài Tập 4: Viết hàm printPersonInfo nhận ba tham số: tên (kiểu string), tuổi (kiểu int), và nghề nghiệp (kiểu string). Hàm này sẽ in thông tin của một người, ví dụ: “Name: Alice, Age: 30, Occupation: Engineer”.
 
4. Truyền Tham Số Theo Giá Trị (Pass by Value)
1.	Bài Tập 1: Định nghĩa hàm squareValue nhận một tham số kiểu int và tính bình phương của giá trị đó. Gọi hàm với một số nguyên trong hàm main và in giá trị bình phương.
2.	Bài Tập 2: Viết hàm incrementValue nhận một tham số kiểu int và tăng giá trị đó thêm 1. In giá trị trước và sau khi gọi hàm để chứng minh rằng giá trị không thay đổi trong hàm main.
3.	Bài Tập 3: Tạo hàm halfValue nhận một tham số kiểu float và trả về nửa giá trị đó. Gọi hàm với một số thực và in kết quả.
4.	Bài Tập 4: Viết hàm subtractFromTen nhận một tham số kiểu int và trả về kết quả của phép trừ 10 với tham số đó. Gọi hàm với một số nguyên và in kết quả.

 5. Truyền Tham Số Theo Tham Chiếu (Pass by Reference)
1.	Bài Tập 1: Định nghĩa hàm swapValues nhận hai tham số kiểu int theo tham chiếu và hoán đổi giá trị của chúng. Trong hàm main, khai báo hai biến kiểu int, gọi hàm swapValues với hai biến này, và in giá trị của hai biến sau khi hoán đổi.
2.	Bài Tập 2: Viết hàm increaseValue nhận một tham số kiểu int theo tham chiếu và tăng giá trị của tham số đó thêm 10. Trong hàm main, khai báo một biến kiểu int, gọi hàm increaseValue với biến này, và in giá trị của biến sau khi gọi hàm.
3.	Bài Tập 3: Tạo hàm resetToDefault nhận một tham số kiểu int theo tham chiếu và gán giá trị của tham số đó thành 100. Trong hàm main, khai báo một biến kiểu int, gọi hàm resetToDefault với biến này, và in giá trị của biến sau khi gọi hàm.
4.	Bài Tập 4: Định nghĩa hàm doubleValues nhận hai tham số kiểu float theo tham chiếu và nhân mỗi giá trị với 2. Trong hàm main, khai báo hai biến kiểu float, gọi hàm doubleValues với hai biến này, và in giá trị của hai biến sau khi gọi hàm.

 6. Tham Số Mặc Định
1.	Bài Tập 1: Định nghĩa hàm calculateVolume nhận ba tham số kiểu int: chiều dài, chiều rộng, và chiều cao của một khối lập phương, với chiều cao có giá trị mặc định là 1. Hàm này sẽ tính thể tích của khối lập phương và trả về kết quả. Trong hàm main, gọi hàm calculateVolume với cả ba giá trị và với chỉ hai giá trị để kiểm tra kết quả.
2.	Bài Tập 2: Viết hàm greetPerson nhận một tham số kiểu string đại diện cho tên người dùng, với giá trị mặc định là “Guest”. Hàm này sẽ in ra thông điệp chào mừng, ví dụ: “Hello, Guest!” hoặc “Hello, [Tên]!”.
3.	Bài Tập 3: Tạo hàm calculateInterest nhận hai tham số kiểu float: số tiền và tỷ lệ lãi suất, với tỷ lệ lãi suất có giá trị mặc định là 5%. Hàm này sẽ tính lãi suất và trả về kết quả. Trong hàm main, gọi hàm với cả hai tham số và chỉ một tham số.
4.	Bài Tập 4: Viết hàm displayMessage nhận một tham số kiểu string với giá trị mặc định là “No message provided”. Hàm này sẽ in ra thông điệp được cung cấp hoặc thông điệp mặc định nếu không có giá trị nào được cung cấp.
 
 7. Lỗi Thường Gặp Và Cách Khắc Phục
1.	Bài Tập 1: Viết một hàm divideNumbers nhận hai tham số kiểu int và trả về kết quả chia của chúng. Xử lý trường hợp chia cho 0 bằng cách in thông báo lỗi thay vì trả về giá trị không hợp lệ.
2.	Bài Tập 2: Định nghĩa hàm findMax nhận ba tham số kiểu int và trả về giá trị lớn nhất trong ba số. Đảm bảo rằng hàm trả về giá trị đúng và không gặp lỗi khi các tham số có giá trị bằng nhau.
3.	Bài Tập 3: Viết hàm printArraySum nhận một mảng kiểu int và kích thước của nó. Hàm này sẽ tính tổng của tất cả các phần tử trong mảng và in kết quả ra màn hình. Đảm bảo rằng bạn không sử dụng thư viện ngoài những thư viện cơ bản.
4.	Bài Tập 4: Định nghĩa hàm getMaxOfArray nhận một mảng kiểu int và kích thước của nó. Hàm này sẽ trả về giá trị lớn nhất trong mảng. Đảm bảo rằng bạn xử lý tình huống mảng rỗng bằng cách trả về một giá trị mặc định.

 */

#include <iostream>

// Hàm Không Có Tham Số Và Không Trả Về Giá Trị
    /* 1: Định nghĩa một hàm printWelcomeMessage không nhận tham số và không trả về giá trị. 
         Hàm này sẽ in ra màn hình thông điệp chào mừng: “Welcome to the C++ Programming World!”.*/
void printWelcomeMessage()
{
	std::cout << "Welcome to the C++ Programming World!"<<std::endl;
}
/* 2: Viết một hàm printFavoriteNumber không nhận tham số và không trả về giá trị. 
      Hàm này sẽ in ra một số nguyên mà bạn yêu thích, ví dụ: “My favorite number is 7.”. */
void printFavoriteNumber()
{
	std::cout << "My favorite number is 7." << std::endl;
}
/* 3: Tạo hàm printCurrentYear không nhận tham số và không trả về giá trị.
	  Hàm này sẽ in ra năm hiện tại, ví dụ: “The current year is 2024.”.*/
void printCurrentYear()
{
	std::cout << "The current year is 2024." << std::endl;
}
/* 4: Viết hàm printGreeting không nhận tham số và không trả về giá trị. 
         Hàm này sẽ in một thông điệp chào đơn giản, ví dụ: “Hello, World!” và thêm một dòng mới.*/
void printGreeting()
{
	std::cout << "Hello, World!” và thêm một dòng mới." << std::endl;
}

// Hàm Có Tham Số Và Trả Về Giá Trị:
/* 1: Định nghĩa hàm addNumbers nhận hai tham số kiểu int và trả về tổng của chúng. 
      Trong hàm main, gọi hàm addNumbers với hai số nguyên và in kết quả ra màn hình. */
int  addNumbers(int a, int b)
{
	return a+b;
}
/* 2: Tạo hàm calculateRectangleArea nhận hai tham số kiểu int đại diện cho chiều dài và chiều rộng của hình chữ nhật và trả về diện tích của nó. 
      Trong hàm main, gọi hàm và in diện tích ra màn hình. */
int calculateRectangleArea (int a, int b) 
{
	return a*b;
}
/* 3: Viết hàm multiply nhận hai tham số kiểu float và trả về tích của chúng. 
      Gọi hàm multiply với hai số thực và in kết quả ra màn hình. */
float multiply (float a, float b) 
{
	return a*b;
}
/* 4: Định nghĩa hàm calculateCircleArea nhận một tham số kiểu float là bán kính của hình tròn và trả về diện tích của nó (S = π * r²). 
      Gọi hàm và in diện tích ra màn hình. */
float calculateCircleArea(float r)
{
    return 3.14*r*r;
}

//  Hàm Có Tham Số Và Không Trả Về Giá Trị
/* 1: Định nghĩa hàm printFullName nhận hai tham số: tên (kiểu string) và họ (kiểu string).
	Hàm này sẽ in ra tên đầy đủ, ví dụ: “John Doe”. */
void printFullName (std::string Name, std::string firstName) {
	std::cout<<firstName<<" "<<Name<<std::endl;
}
/* 2: Viết một hàm printSum nhận hai tham số kiểu int, tính tổng của chúng và in kết quả ra màn hình. */
void printSum(int a, int b)
{
	std::cout<<"sum= "<<a+b<<std::endl;
}
/* 3: Tạo hàm printRectangleDimensions nhận hai tham số kiểu int đại diện cho chiều dài và chiều rộng của một hình chữ nhật.
	  Hàm này sẽ in ra kích thước của hình chữ nhật, ví dụ: “Length: 5, Width: 10”. */
void printRectangleDimensions (int a, int b) {
	std::cout<<a+b<<std::endl;
}
/* 4: Viết hàm printPersonInfo nhận ba tham số: tên (kiểu string), tuổi (kiểu int), và nghề nghiệp (kiểu string).
	  Hàm này sẽ in thông tin của một người, ví dụ: “Name: Alice, Age: 30, Occupation: Engineer”. */
void printPersonInfo (std::string Name, int age, std::string job) {
	std::cout<<"Name: "<<Name<<", Age: "<<age<<", Job: "<<job<<std::endl;
}

//. Truyền Tham Số Theo Giá Trị (Pass by Value)- sử dụng hàm void
/* 1 Định nghĩa hàm squareValue nhận một tham số kiểu int và tính bình phương của giá trị đó. 
    Gọi hàm với một số nguyên trong hàm main và in giá trị bình phương.*/
int squareValue (int a){
	return a*a;
}
/* 2. Viết hàm incrementValue nhận một tham số kiểu int và tăng giá trị đó thêm 1.
    In giá trị trước và sau khi gọi hàm để chứng minh rằng giá trị không thay đổi trong hàm main.*/
void incrementValue (int a)
{   
	int b=a+1;
}
/* 3. Tạo hàm halfValue nhận một tham số kiểu float và trả về nửa giá trị đó.
    Gọi hàm với một số thực và in kết quả.*/
float halfValue(float a)
{
	return a/2;
}
/* 4. Viết hàm subtractFromTen nhận một tham số kiểu int và trả về kết quả của phép trừ 10 với tham số đó. 
    Gọi hàm với một số nguyên và in kết quả. */
int subtractFromTen(int a)
{
	return a- 10;
}

// Truyền Tham Số Theo Tham Chiếu (Pass by Reference)- sử dụng tham chiếu để thay đổi giá trị của biến trong hàm gọi, nếu không sử dụng thì biến không thay đổi
/*1: Định nghĩa hàm swapValues nhận hai tham số kiểu int theo tham chiếu và hoán đổi giá trị của chúng. 
     Trong hàm main, khai báo hai biến kiểu int, gọi hàm swapValues với hai biến này, và in giá trị của hai biến sau khi hoán đổi.*/
	int swapValues (int& a, int& b) {
		int temp= a;
		a= b;
		b= temp;
		return a,b;
	 }
/*2: Viết hàm increaseValue nhận một tham số kiểu int theo tham chiếu và tăng giá trị của tham số đó thêm 10. 
     Trong hàm main, khai báo một biến kiểu int, gọi hàm increaseValue với biến này, và in giá trị của biến sau khi gọi hàm.*/
	 int increaseValue (int &a)
	 {
		 return a + 10;
	 }
/*3: Tạo hàm resetToDefault nhận một tham số kiểu int theo tham chiếu và gán giá trị của tham số đó thành 100. 
     Trong hàm main, khai báo một biến kiểu int, gọi hàm resetToDefault với biến này, và in giá trị của biến sau khi gọi hàm.*/
	int resetToDefault(int& a) {
		return a= 100;
	} 
/*4: Định nghĩa hàm doubleValues nhận hai tham số kiểu float theo tham chiếu và nhân mỗi giá trị với 2. 
     Trong hàm main, khai báo hai biến kiểu float, gọi hàm doubleValues với hai biến này, và in giá trị của hai biến sau khi gọi hàm.*/
	float doubleValues (float& a, float& b){
		a=a*2;
		b=b*2;
		return a,b;
	}

//6. Tham Số Mặc Định
/* 1: Định nghĩa hàm calculateVolume nhận ba tham số kiểu int: chiều dài, chiều rộng, và chiều cao của một khối lập phương, với chiều cao có giá trị mặc định là 1.
      Hàm này sẽ tính thể tích của khối lập phương và trả về kết quả. 
	  Trong hàm main, gọi hàm calculateVolume với cả ba giá trị và với chỉ hai giá trị để kiểm tra kết quả.*/
	int  calculateVolume (int a, int b, int c= 1){
		return a*b*c;
	}
/* 2: Viết hàm greetPerson nhận một tham số kiểu string đại diện cho tên người dùng, với giá trị mặc định là “Guest”. 
      Hàm này sẽ in ra thông điệp chào mừng, ví dụ: “Hello, Guest!” hoặc “Hello, [Tên]!”.*/
	void greetPerson (std::string a, std::string b= "Guest"){
		std::cout<<a<<", "<<b<<std::endl;
	}  
/* 3. Tạo hàm calculateInterest nhận hai tham số kiểu float: số tiền và tỷ lệ lãi suất, với tỷ lệ lãi suất có giá trị mặc định là 5%. 
    Hàm này sẽ tính lãi suất và trả về kết quả. Trong hàm main, gọi hàm với cả hai tham số và chỉ một tham số. */
	float calculateInterest (float a, float b= 0.05){
		return a*b;
	}
/* 4. Viết hàm displayMessage nhận một tham số kiểu string với giá trị mặc định là “No message provided”. 
    Hàm này sẽ in ra thông điệp được cung cấp hoặc thông điệp mặc định nếu không có giá trị nào được cung cấp.	*/
	void displayMessage (std::string a= "No message provided"){
		std::cout<<a<<std::endl;
	}

// Lưu ý: Lỗi Thường Gặp Và Cách Khắc Phục
/*1. Viết một hàm divideNumbers nhận hai tham số kiểu int và trả về kết quả chia của chúng. 
   Xử lý trường hợp chia cho 0 bằng cách in thông báo lỗi thay vì trả về giá trị không hợp lệ.*/
   int divideNumbers (int a, int b){
	  if (b==0)
	  {
		  std::cout << "error"<<std::endl;
	  } else{ return a/b;};	  	
   }
/*2. Định nghĩa hàm findMax nhận ba tham số kiểu int và trả về giá trị lớn nhất trong ba số. 
   Đảm bảo rằng hàm trả về giá trị đúng và không gặp lỗi khi các tham số có giá trị bằng nhau.*/
   int findMax (int a, int b, int c){
	  if (a> b && a> c){
		return a;
	  } else if (b> a && b> c)
	  {
		return b;
	  } else if (c> a && c> b)
	  {
		return c;
	  }
   }
/*3. Viết hàm printArraySum nhận một mảng kiểu int và kích thước của nó. 
   Hàm này sẽ tính tổng của tất cả các phần tử trong mảng và in kết quả ra màn hình. 
   Đảm bảo rằng bạn không sử dụng thư viện ngoài những thư viện cơ bản.*/
   void printArraySum (int a[], int size){
	   int sum= 0;
	   for (int i= 0; i< size; i++){
		  sum= a[i]+sum;
	   };
	   std::cout<<"sum= "<<sum<<std::endl;
   }

/*4. Định nghĩa hàm getMaxOfArray nhận một mảng kiểu int và kích thước của nó.
    Hàm này sẽ trả về giá trị lớn nhất trong mảng.
    Đảm bảo rằng bạn xử lý tình huống mảng rỗng bằng cách trả về một giá trị mặc định.*/
	int getMaxOfArray (int a[], int size){
	for (int i= 0; i< size; i++)
	{
		for (int j= 0; j< i; j++)
		{
			if (a[i]<a[j])
			{
				return a[i];
			}	
		}
	}
}

int	main()
{
	printWelcomeMessage();
	printFavoriteNumber();
	printCurrentYear();
	printGreeting();
	
	int sum1= addNumbers(4,3);
	std::cout<<"sum1= "<<sum1<<std::endl;
	int hcn = calculateRectangleArea (4, 3);
	std::cout << "sum1= " << hcn << std::endl;
	float plus= multiply (4.5 ,3);
	std::cout<<"plus= "<<plus<<std::endl;
	float circle = calculateCircleArea(4.5);
	std::cout << "circle= " <<circle<< std::endl;

	printFullName("Doe", "John");
	printSum (4,3);
	printRectangleDimensions (10,5);
	printPersonInfo ("Allice",30,"Engineers");

	int value1 = squareValue(4);
	std::cout << "value1= " << value1 << std::endl;
    //so sánh giá trị value2 trước và sau khi gán vào hàm tăng 1 đơn vị
	int value2= 5;
	std::cout << "gia tri value2 truoc khi duoc them 1 don vi  " << value2 << std::endl;
	incrementValue(value2);
	std::cout << "gia tri value2 sau khi duoc them 1 don vi  " << value2 << std::endl;// không thay đổi giá trị biến value2
	float value3 = halfValue(4.5);
	std::cout << "value3= " << value3 << std::endl;
	int value4 = subtractFromTen(4.5);
	std::cout << "value4= " << value4 << std::endl;

	int value5=5;
	int value6=7;
	swapValues(value5,value6);
	std::cout << "gia tri sau khi hoan doi: " << value5 << " " << value6 << std::endl;
	int value7=5;
	std::cout << "gia tri value5 truoc khi duoc them 1 don vi  " << value7 << std::endl;
	increaseValue(value7);
	std::cout << "gia tri value5 truoc khi duoc them 1 don vi  " << value7 << std::endl; // không thay đổi giá trị bién value5
	float value8= 3.5;
	float value9=2.4;
	doubleValues(value8,value9);
	std::cout << "value8= "<<value8<<" "<<"value9= "<<value9<<std::endl;

	int thetich= calculateVolume (10,11);
	std::cout<<"the tich= "<<thetich<<std::endl;
	greetPerson("Hello");
	int value12=30;
	calculateInterest (value12,0.02);
	displayMessage();

	int value13 = divideNumbers(4,2);
	std::cout<<"gia tri: "<<value13<<std::endl;
	int value14= findMax(1,2,3);
	std::cout<<"so lon nhat: "<<value14<<std::endl;
	int arr[4]={1,2,3,4};
    printArraySum (arr,4);
	int value15= getMaxOfArray(arr,4);
	std::cout<<"so lon nhat: "<<value15<<std::endl;
}