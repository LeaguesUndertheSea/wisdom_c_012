//#include <stdio.h>
//
//int main(void)
//{
//	char buffer[100];
//
//	gets_s(buffer, sizeof(buffer)); // 像scanf, 不过是字符了
//
//	printf("%s\n", buffer);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	// strtok_s
//	// 按要求分解字符串
//
//	char str[] = " This is a sample string ";
//
//	char delim[] = " ";
//
//	char* token;
//
//	char* context = { 0 }; // 保存strtok_s函数在其内部位置的上下文指针
//
//	token = strtok_s( str, delim, &context );
//
//	while (token != NULL) {
//		printf("Token: %s\n", token);
//		token = strtok_s( NULL, delim, &context );
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	// 但凡涉及到修改字符_s
//	// strcmp 挨个比较字符ASCLL码，看前后顺序
//	const char* str1 = " Hello, World ! ";
//
//	const char* str2 = " Hello, World ! ";
//
//	const char* str3 = " Hello, Guys ！";
//
//	if (strcmp(str1, str2) == 0) {
//		printf("str1 and str2 are equal!\n");
//	}
//
//	else {
//		printf("str1 and str2 are not equal!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	// strncmp 
//
//	size_t num = 9; // 比较前5个字符
//
//	const char* str1 = " Hello, World ! ";
//
//	const char* str2 = " Hello, World ! ";
//
//	const char* str3 = " Hello, Guys ！";
//
//	if (strncmp(str1, str2, num) == 0) {
//		printf("str1 and str2 are equal!\n");
//	}
//
//	else {
//		printf("str1 and str2 are not equal!\n");
//	}
//
//	if (strncmp(str1, str3, num) == 0) {
//		printf("str1 and str3 are equal!\n");
//	}
//
//	else {
//		printf("str1 and str3 are not equal!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	const char* str = " Hello, worldww! ";
//
//	char to_find = 'w';
//
//	char* ptr_char = strchr(str, to_find);
//
//	char* ptr_reverse_char = strrchr(str, to_find);
//
//	if (ptr_char) {
//		printf("找到了！'%c'的位置是：%td\n", to_find, ptr_char - str + 1); // 不加1是数组下标
//	}
//	// ptrdiff_t
//	else {
//		printf("没有找到！\n");
//	}
//
//	if (ptr_reverse_char) {
//		printf("找到了，从屁股后面找：'%c'的位置是: %td\n", to_find, ptr_reverse_char - str + 1);
//	}
//
//	else {
//		printf("没有找到!\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	// strstr
//
//	const char* text = "This is a simple text a simple string.";
//
//	const char* sub = "simple"; // 子字符串
//
//	char* result = strstr(text, sub);
//
//	if (result != NULL) {
//		printf("Found '%s' in \'%s'\ at position: %td\n", sub, text, result - text + 1);
//	}
//
//	else {
//		printf("Sustring '%s' not found in \'%s'\. \n", sub, text);
//	}
//
//
//
//	return 0;
//}


//#include <string.h>
//#include <stdio.h>
//
//int main(void)
//{
//	const char* str1 = "123456ab";
//
//	const char* str2 = "123456cd";
//
//	size_t len = strspn(str1, str2); // 从首字符开始找相同的个数
//
//	printf("%zu\n", len);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char input[] = "filen???ame.txt";
//
//	char invalid_chars[] = "/\\:*?\"<>|";
//
//		if (strcspn(input, invalid_chars) < strlen(input)) {
//			printf("Input contains invalid characters.\n");
//		}
//
//		else {
//			printf("Input is valid.\n");
//		}
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[] = "Hello";
//
//	char* ptr = str;
//
//	ptr[1] = 'a';
//
//	printf("%s\n", str);
//
//	while (*ptr != '\0') {
//		printf("%c", *ptr);
//
//		ptr++;
//	}
//
//	// 字符串常量
//
//	const char* p = "Hello";
//
//	printf("%c", *p);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define TEXT_SIZE 100
//#define WORD_SIZE 50
//#define DELIMS " ,.!/\n"
//void replaceWord(const char* text, const char* oldWord, const char* newWord, char* result);
//int countChar(const char* text, char ch);
//int countWords(const char* text);
//void extractUniqueWords(const char* text, char uniqueWords[][WORD_SIZE], int* uniqueCount);
//
//int main(void)
//{
//	char text[TEXT_SIZE] = "This is a simple test. This text is for texting.";
//
//	char replacedText[TEXT_SIZE] = { 0 };
//
//	char oldWord[] = "test";
//
//	char newWord[] = "example";
//
//	char countCharTarget = 's';
//
//	char uniqueWords[TEXT_SIZE][WORD_SIZE] = { 0 };
//
//	int uniqueCount = 0;
//	
//	replaceWord(text, oldWord, newWord, replacedText);
//	printf("Replaced text: %s\n", replacedText);
//
//	int charCount = countChar(replacedText, countCharTarget);
//	printf("Character '%c' appears %d times.\n", countCharTarget, charCount);
//
//	int wordCount = countWords(replacedText);
//
//	printf("Total number of words: %d\n", wordCount);
//
//	extractUniqueWords(replacedText, uniqueWords, &uniqueCount);
//	puts("Unique words:");
//
//	for (int i = 0; i < uniqueCount; i++) {
//		printf("%s\n", uniqueWords[i]);
//	}
//
//	return 0;
//}
//
//void replaceWord(const char* text, const char* oldWord, const char* newWord, char* result) {
//	char buffer[TEXT_SIZE] = { 0 };
//	const char* pos = text;
//	const char* temp = text;
//	size_t oldLen = strlen(oldWord);
//
//	while ((temp = strstr(pos, oldWord)) != NULL) {
//		strncat_s(buffer, sizeof(buffer), pos, temp - pos);
//		strcat_s(buffer, sizeof(buffer), newWord);
//		pos = temp + oldLen;
//	}
//
//	strcat_s(buffer, sizeof(buffer), pos);
//	strcpy_s(result, TEXT_SIZE, buffer);
//}
//
//int countChar(const char* text, char ch) {
//	int count = 0;
//	while (*text) {
//		if (*text == ch) {
//			count++;
//		}
//		text++;
//	}
//
//	return count;
//}
//
//int countWords(const char* text) {
//	int count = 0;
//	char buffer[TEXT_SIZE] = { 0 };
//
//	strcpy_s(buffer, TEXT_SIZE, text);
//
//	char* context = NULL;
//
//	char* token = strtok_s(buffer, DELIMS, &context);
//
//	while (token != NULL) {
//		count++;
//		token = strtok_s(NULL, DELIMS, &context);
//	}
//
//	return count++;
//}
//
//void extractUniqueWords(const char* text, char uniqueWords[][WORD_SIZE], int* uniqueCount) {
//	char tempText[TEXT_SIZE] = { 0 };
//	strcpy_s(tempText, TEXT_SIZE, text);
//
//	char* context = NULL;
//	char* token = strtok_s(tempText, DELIMS, &context);
//
//	while (token != NULL) {
//		int found = 0;
//
//		for (int j = 0; j < *uniqueCount; ++j) {
//				
//			if (strcmp(token, uniqueWords[j]) == 0) {
//				found = 1;
//				break;
//			}
//		}
//
//		if (!found) {
//			strcpy_s(uniqueWords[*uniqueCount], WORD_SIZE, token);
//			(*uniqueCount)++;
//		}
//		token = strtok_s(NULL, DELIMS, &context);
//	}
//}


//#include <stdio.h>
//#define SIZE 5
//#define scanf scanf_s
//int main(void)
//{
//	// scanf
//	// scanf_s
//
//	char name[123];
//
//	printf("Enter your name: ");
//
//	scanf_s("%49s", name, (unsigned int)sizeof(name)); // 是字符串时要考虑缓冲区溢出
//
//	printf("Hello, %s!\n", name);
//
//	int age;
//
//	printf("Enter an age: ");
//
//	scanf("%d", &age);
//
//	printf("You entered: %d\n", age);
//
//	return 0;
//}

// 可以检测输入问题
//#include <stdio.h>
//
//int main(void)
//{
//	// scanf_s
//	int number;
//	int result;
//
//	puts("Enter an integer:");
//
//	result = scanf_s("%d", &number);
//
//	if (result == 1) {
//		printf("You entered the integer: %d\n", number);
//	}
//	
//	else if (result == EOF) {
//			// End of file -1
//			// 专门用来指示文件读取或输入操作已经达到了数据源的末尾
//		// 例如溢出
//		printf("An error occurred of end of file was reached.\n");
//		return 1;
//	}
//
//	else {
//		printf("Invalid input for integer.\n");
//		return 1;// 例如字符
//	}
//
//	return 0;
//}


//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main(void)
//{
//	FILE* file_stream = NULL;//文件流指针
//
//	char buffer[256];
//
//	// fopen()
//	// fopen_s()
//	// 打开文件，设定文件路径要读取的文件，设定文件的操作模式
//	errno_t err = fopen_s(&file_stream, "C:\\Users\\HYD2357\\Desktop\\123.txt", "r");
//
//	//文件路径不对，文件不存在，文件出现了异常，文件没有权限访问。。。
//	// read
//	// != NULL
//
//	if (err != 0 || file_stream == NULL) {
//		perror("Error opening file");
//		return EXIT_FAILURE; // 返回有关文件的错误(比如更改路径)
//	}
//	//行读取
//	/*fgets(buffer, sizeof(buffer), file_stream);*/// 缓冲区、缓冲区长度，
//
//	while (fgets(buffer, sizeof(buffer), file_stream) != NULL) {
//		printf("%s", buffer);
//	}
//
//	// 此时file_stream指针已经把所有的文件内容读完了，循环读完了，指针指最后一个位置了
//
//	memset(buffer, 0, sizeof(buffer)); // 释放内存缓冲区
//
//	printf("\n");
//
//	rewind(file_stream); // 使得光标回到开头
//	//挨个字符去读
//	int ch;
//
//	while ((ch = fgetc(file_stream) != EOF)) {
//		putchar(ch); 
//	}
//
//	if (fclose(file_stream) != 0) {
//		perror("Error closing file");
//		return EXIT_FAILURE;// 检查文件关闭
//	}
//	
//	return 0;
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <inttypes.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	FILE* file_ptr = NULL;
//
//	errno_t err = fopen_s(&file_ptr, "C:\\Users\\HYD2357\\Desktop\\321.txt", "w");
//	// "w":写入，覆盖
//	if (err != 0 || file_ptr == NULL) {
//		perror("Failed to open file");
//		return EXIT_FAILURE;
//	}
//
//	//fput() fputs() fprintf_s()
//
//	fputc('H', file_ptr);
//	fputc('i', file_ptr);
//	fputc('\n', file_ptr);
//
//	fputs("This is a line written by fputs.\n", file_ptr);
//
//	float pi = 3.14;
//
//	fprintf_s(file_ptr, "Numbers: %d, %f, %s\n", 10, pi, "End of example.");
//
//	fclose(file_ptr);
//
//	puts("File has been written successfully.\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <inttypes.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	FILE* file_ptr = NULL;
//
//	errno_t err = fopen_s(&file_ptr, "C:\\Users\\HYD2357\\Desktop\\321.txt", "r+");
//	if (err != 0 || file_ptr == NULL) {
//		perror("Failed to open file");
//		return EXIT_FAILURE;
//	}
//
//	// ftell
//	// fseek
//	// rewind
//
//	// 使用ftell 获取当前位置
//	long position = ftell(file_ptr);
//	printf("%ld\n", position);
//
//	// 开始读取
//	char buffer[100];
//
//	if (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
//		printf("从文件读取：%s\n", buffer);
//	}	// 再次使用ftell获取兴趣新的位置
//	position = ftell(file_ptr);
//	printf("读取后的新位置: %ld\n", ftell(file_ptr)); // 有\n
//
//	// 使用 fseek函数移动到函数的开始
//	fseek(file_ptr, 0, SEEK_SET);
//	printf("使用fseek后移动到开始的位置, SEEK_SET = 0 : %ld\n", ftell(file_ptr));
//
//	// rewind
//	
//	rewind(file_ptr);
//	printf("使用rewind直接移动到开始的位置: %ld\n", ftell(file_ptr));
//
//	// 关闭文件
//	fclose(file_ptr);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <inttypes.h>
//#include <stdlib.h>
//
//FILE* stream;
//
//int main(void)
//{
//    long l;
//    float fp;
//    char s[81];
//    char c;
//
//    errno_t err = fopen_s(&stream, "C:\\Users\\HYD2357\\Desktop\\001.txt", "r");
//        if(err)
//            printf_s("The file fscanf.out was not opened\n");
//    else
//    {
//            if (fscanf_s(stream, "%80s", s, (unsigned)_countof(s)) != 1) {
//                printf("读取字符串失败!\n");
//            }
//
//            if (fscanf_s(stream, "%lds", &l) != 1) {
//                printf("读取ld失败！\n");
//            }
//
//            if (fscanf_s(stream, "%f", &fp) != 1) {
//                printf("读取lf失败！\n");
//             }
//
//            if (fscanf_s(stream, " %c", &c, 1) != 1) {
//                printf("读取lf失败");
//            }
//
//        // Output data read:
//        printf("%s\n", s);
//        printf("%ld\n", l);
//        printf("%f\n", fp);
//        printf("%c\n", c);
//
//        fclose(stream);
//    }
//}

// fprintf:缓冲区写入到文件中
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <inttypes.h>
//#include <stdlib.h>
//
//  FILE* stream;
//  
//int main(void)
//{
//	long l;
//	float fp;
//	char s[81];
//	char c;
//	errno_t err = fopen_s(&stream, "C:\\Users\\HYD2357\\Desktop\\002.txt", "w+");
//
//	if (err != 0) {
//		printf("无法打开文件进行写入操作！\n");
//		return EXIT_FAILURE;
//	}
//
//	int id = 1;
//	float temperature = 36.5f;
//	char name[] = "Frank";
//	char grade = 'A';
//
//	fprintf(stream, "ID: %d\n", id);
//	fprintf(stream, "Name: %s\n", name);
//	fprintf(stream, "Temperature: %.1f\n", temperature);
//	fprintf(stream, "Grade: %c", grade);
//
//	fclose(stream);
//
//	printf("数据写入完成！\n");
//
//
//	return 0;
//}


 // ferror: 检查文件流是否有错误发出来（返回非零值）
 // feof: 检查是否达到文件流的末尾（返回非零值）
 // clearerr: 清除错误与标志

//#include <stdio.h>
//#include <stdlib.h>
//#include <errno.h>
//
//int main(void)
//{
//	FILE* file_ptr;
//
//	errno_t err = fopen_s(&file_ptr, "C:\\Users\\HYD2357\\Desktop\\003.txt", "r");
//
//	char buffer[100];
//
//	if (err != 0 || file_ptr == NULL) {
//		perror("无法打开文件");
//		return EXIT_FAILURE;
//	}
//
//	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL){
//		printf("%s", buffer);
//	}
//
//	if (ferror(file_ptr)) {
//		perror("读取文件时发生了错误!");
//		clearerr(file_ptr);
//	}
//
//	if (feof(file_ptr)) {
//		printf("已经到达文件的末尾...\n");
//	}
//
//	else {
//		printf("文件未到达末尾， 可能发生了错误！\n");
//	}
//
//	if (fclose(file_ptr) != 0) {
//		perror("Error closing file");
//		return EXIT_FAILURE;
//	}// 读"r"fclose(file_ptr)即可
//
//	return 0;
//}
// 用函数来读
//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//#define BUFFER_SIZE 1024
//
//void read_config_safe(const char* filename);
//void append_log_safe(const char* filename, const char* msg);
//void clear_log(const char* filename);
//
//int main(void)
//{
//	const char* filename = "C:\\Users\\HYD2357\\Desktop\\003.txt";
//
//	const char* log_filename = "C:\\Users\\HYD2357\\Desktop\\log.txt";
//
//	read_config_safe(filename);
//
//	const char* str = "select * from students";
//
//	append_log_safe(log_filename, str);
//	// All other files are closed(关流)
//	/*int numclosed =
//	printf("Number of files closed by _flcoseall: %u\n", numclosed);*/
//	clear_log(log_filename);
//
//	_flcoseall();
//
//	return 0;
//}
//
//void read_config_safe(const char* filename) {
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename,"r");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	char buffer[256];
//	while (fgets(buffer, sizeof(file_ptr), file_ptr) != NULL) {
//		printf("%s", buffer);
//	}
//	fclose(file_ptr);
//}
//
//void append_log_safe(const char* filename, const char* msg) {
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "a");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config log file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	fprintf(file_ptr, "%s\n", msg);
//	fclose(file_ptr);
//}
//
//void clear_log(const char* filename) {
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "w");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	/*文件已经打开为"w"模式，我们什么都不操作，文件内容会被清空，无需写入任何内容。*/
//	fclose(file_ptr);
//}

// 修改记事本中的数据
//#include <stdio.h>
//#include <inttypes.h>
//#include <stdlib.h>
//#include <errno.h>
//#include <string.h>
//#define BUFFER_SIZE 1024
//void read_config_safe(const char* filename);
//void append_log_safe(const char* filename, const char* msg);
//void clear_log(const char* filename);
//errno_t update_log_record_s(const char* filename, const char* search_str, const char* replace_str);
//
//
//int main(void)
//{
//	const char* log_file = "C:\\Users\\HYD2357\\Desktop\\zhangsan.log";
//
//	const char* search_str = "天气好";
//
//	const char* replace_str = "天气差";
//
//	errno_t result = update_log_record_s(log_file, search_str, replace_str);
//
//	if (result != 0) {
//		char error_msg[256];
//		strerror_s(error_msg, sizeof(error_msg), result);
//		fprintf(stderr, "An error occured: %s\n", error_msg);
//	}
//
//	else {
//		printf("Record updated successfully.\n");
//	}
//
//	_fcloseall();
//
//	return 0;
//}
//
//void read_config_safe(const char* filename) {
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "r");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	char buffer[256];
//	while (fgets(buffer, sizeof(file_ptr), file_ptr) != NULL) {
//		printf("%s", buffer);
//	}
//	fclose(file_ptr);
//}
//
//void append_log_safe(const char* filename, const char* msg) {
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "a");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config log file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	fprintf(file_ptr, "%s\n", msg);
//	fclose(file_ptr);
//}
//
//void clear_log(const char* filename) {
//	FILE* file_ptr = NULL;
//	errno_t err = fopen_s(&file_ptr, filename, "w");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	/*文件已经打开为"w"模式，我们什么都不操作，文件内容会被清空，无需写入任何内容。*/
//	fclose(file_ptr);
//}
//
//errno_t update_log_record_s(const char* filename, const char* search_str, const char* replace_str) {
//	if (filename == NULL || search_str == NULL || replace_str == NULL) {
//		return EINVAL; // 返回无效参数错误
//	}
//
//	FILE* file_ptr = NULL;
//
//	errno_t err = fopen_s(&file_ptr, filename, "r+");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// 将错误信息放到缓冲区
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	char buffer[BUFFER_SIZE];
//	long position = 0;
//	int found = 0;
//
//	while (fgets(buffer, BUFFER_SIZE, file_ptr) != NULL) {
//		if (strstr(buffer, search_str) != NULL) {
//			found = 1;
//			position = ftell(file_ptr) - (long)strlen(buffer);
//			break;  // 找到第一个匹配项之后，立刻停止
//		}
//	}
//
//	if (found) {
//		fseek(file_ptr, position, SEEK_SET);	// 移动回到找到记录的位置
//	}
//
//	// 计算替换文本与原文本的长度差异
//	size_t replace_len = strlen(replace_str);
//	size_t search_len = strlen(search_str);
//
//	if (replace_len > BUFFER_SIZE || search_len > BUFFER_SIZE) {
//		fclose(file_ptr);
//
//		return ERANGE; // 返回错误码，表示字符串长度超出范围
//	}
//
//	// 写入新纪录之前，清楚所在位置的行数据
//	memset(buffer, ' ', strlen(buffer) - 1);// 用空格填充，保持文件大小不变
//
//	buffer[strlen(buffer) - 1] = '\n'; // 保留换行符
//
//	fseek(file_ptr, position, SEEK_SET);	// 重新回到表记行的开始
//
//	fputs(buffer, file_ptr); // 清除原来行的内容
//
//	fseek(file_ptr, position, SEEK_SET); // 重新回到表记行的开始
//
//	int result = fputs(replace_str, file_ptr);  // 写入替换的字符串
//
//	if (result == EOF) {
//		fclose(file_ptr);
//		return errno;
//	}
//
//	else {
//		fclose(file_ptr);
//		return ENOENT; // 返回未找到的匹配项
//	}
//
//	fclose(file_ptr);
//}	


//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct GameSettings {
//	float volume;
//	int resolution_x;
//	int resolution_y;
//	int difficulty;
//}GameSettings;
//void save_game_settings(const GameSettings* settings, const char* filename);
//void load_game_settings(GameSettings* settings, const char* filename);
//
//int main(void)
//{
//	// fread 
//	// fwrite
//
//	// 写二进制
//
//	/*GameSettings settings = { 0.75, 1920, 1080, 2};
//
//	save_game_settings(&settings, "C:\\Users\\HYD2357\\Desktop\\zhangsan.log");*/
//
//	GameSettings loaded_settings;
//
//	load_game_settings(&loaded_settings, "C:\\Users\\HYD2357\\Desktop\\zhangsan.log");
//
//	printf("游戏设置已经加载!\n");
//
//	printf("音量：%f\n分辨率：%dx%d\n难度: %d\n",
//		loaded_settings.volume,
//		loaded_settings.resolution_x,
//		loaded_settings.resolution_y,
//		loaded_settings.difficulty
//	);
//
//	return 0;
//}
//
//
//
//void load_game_settings(GameSettings* settings, const char* filename) {
//	FILE* file;
//	errno_t err = fopen_s(&file, filename, "rb"); // b:二进制
//	if (err != 0 || file == NULL) {
//		perror("无法打开文件进行读取操作");
//		return;
//	}
//
//	fread(settings, sizeof(GameSettings), 1, file);
//	fclose(file);
//}
//// 加载游戏设置
//void save_game_settings(const GameSettings* settings, const char* filename) {
//	FILE* file;
//	errno_t err = fopen_s(&file, filename, "wb"); // b:二进制
//	if (err != 0 || file == NULL) {
//		perror("无法打开文件进行写入操作");
//		return;
//	}
//
//	fwrite(settings, sizeof(GameSettings), 1, file);// 缓冲区 结构体大小 每次读取数据量的数量 指针 
//
//	fclose(file);
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	FILE* source_file, * target_file;
//
//	char source_path[] = "C:\\Users\\HYD2357\\Desktop\\log.txt";
//
//	char target_path[] = "C:\\Users\\HYD2357\\Desktop\\zhangsan.log";
//
//	char buffer[1024];
//
//	size_t bytes_read;
//
//	errno_t err = fopen_s(&source_file, source_path, "rb");
//
//	if (err != 0 || source_file == NULL) {
//		perror("无法打开文源件");
//		return EXIT_FAILURE;
//	}
//
//	err = fopen_s(&target_file, target_path, "wb");
//
//	if (err != 0 || source_file == NULL) {
//		perror("无法打开目标文件");
//		fclose(source_file);
//		return EXIT_FAILURE;
//	}
//
//	while ((bytes_read = fread(buffer, 1, sizeof(buffer),source_file)) > 0) {
//		fwrite(buffer, 1, bytes_read, target_file);
//	}
//
//	_fcloseall();
//
//	puts("文件复制完成");
//
//	return 0;
//}