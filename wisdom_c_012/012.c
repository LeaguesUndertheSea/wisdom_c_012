//#include <stdio.h>
//
//int main(void)
//{
//	char buffer[100];
//
//	gets_s(buffer, sizeof(buffer)); // ��scanf, �������ַ���
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
//	// ��Ҫ��ֽ��ַ���
//
//	char str[] = " This is a sample string ";
//
//	char delim[] = " ";
//
//	char* token;
//
//	char* context = { 0 }; // ����strtok_s���������ڲ�λ�õ�������ָ��
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
//	// �����漰���޸��ַ�_s
//	// strcmp �����Ƚ��ַ�ASCLL�룬��ǰ��˳��
//	const char* str1 = " Hello, World ! ";
//
//	const char* str2 = " Hello, World ! ";
//
//	const char* str3 = " Hello, Guys ��";
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
//	size_t num = 9; // �Ƚ�ǰ5���ַ�
//
//	const char* str1 = " Hello, World ! ";
//
//	const char* str2 = " Hello, World ! ";
//
//	const char* str3 = " Hello, Guys ��";
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
//		printf("�ҵ��ˣ�'%c'��λ���ǣ�%td\n", to_find, ptr_char - str + 1); // ����1�������±�
//	}
//	// ptrdiff_t
//	else {
//		printf("û���ҵ���\n");
//	}
//
//	if (ptr_reverse_char) {
//		printf("�ҵ��ˣ���ƨ�ɺ����ң�'%c'��λ����: %td\n", to_find, ptr_reverse_char - str + 1);
//	}
//
//	else {
//		printf("û���ҵ�!\n");
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
//	const char* sub = "simple"; // ���ַ���
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
//	size_t len = strspn(str1, str2); // �����ַ���ʼ����ͬ�ĸ���
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
//	// �ַ�������
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
//	scanf_s("%49s", name, (unsigned int)sizeof(name)); // ���ַ���ʱҪ���ǻ��������
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

// ���Լ����������
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
//			// ר������ָʾ�ļ���ȡ����������Ѿ��ﵽ������Դ��ĩβ
//		// �������
//		printf("An error occurred of end of file was reached.\n");
//		return 1;
//	}
//
//	else {
//		printf("Invalid input for integer.\n");
//		return 1;// �����ַ�
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
//	FILE* file_stream = NULL;//�ļ���ָ��
//
//	char buffer[256];
//
//	// fopen()
//	// fopen_s()
//	// ���ļ����趨�ļ�·��Ҫ��ȡ���ļ����趨�ļ��Ĳ���ģʽ
//	errno_t err = fopen_s(&file_stream, "C:\\Users\\HYD2357\\Desktop\\123.txt", "r");
//
//	//�ļ�·�����ԣ��ļ������ڣ��ļ��������쳣���ļ�û��Ȩ�޷��ʡ�����
//	// read
//	// != NULL
//
//	if (err != 0 || file_stream == NULL) {
//		perror("Error opening file");
//		return EXIT_FAILURE; // �����й��ļ��Ĵ���(�������·��)
//	}
//	//�ж�ȡ
//	/*fgets(buffer, sizeof(buffer), file_stream);*/// �����������������ȣ�
//
//	while (fgets(buffer, sizeof(buffer), file_stream) != NULL) {
//		printf("%s", buffer);
//	}
//
//	// ��ʱfile_streamָ���Ѿ������е��ļ����ݶ����ˣ�ѭ�������ˣ�ָ��ָ���һ��λ����
//
//	memset(buffer, 0, sizeof(buffer)); // �ͷ��ڴ滺����
//
//	printf("\n");
//
//	rewind(file_stream); // ʹ�ù��ص���ͷ
//	//�����ַ�ȥ��
//	int ch;
//
//	while ((ch = fgetc(file_stream) != EOF)) {
//		putchar(ch); 
//	}
//
//	if (fclose(file_stream) != 0) {
//		perror("Error closing file");
//		return EXIT_FAILURE;// ����ļ��ر�
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
//	// "w":д�룬����
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
//	// ʹ��ftell ��ȡ��ǰλ��
//	long position = ftell(file_ptr);
//	printf("%ld\n", position);
//
//	// ��ʼ��ȡ
//	char buffer[100];
//
//	if (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
//		printf("���ļ���ȡ��%s\n", buffer);
//	}	// �ٴ�ʹ��ftell��ȡ��Ȥ�µ�λ��
//	position = ftell(file_ptr);
//	printf("��ȡ�����λ��: %ld\n", ftell(file_ptr)); // ��\n
//
//	// ʹ�� fseek�����ƶ��������Ŀ�ʼ
//	fseek(file_ptr, 0, SEEK_SET);
//	printf("ʹ��fseek���ƶ�����ʼ��λ��, SEEK_SET = 0 : %ld\n", ftell(file_ptr));
//
//	// rewind
//	
//	rewind(file_ptr);
//	printf("ʹ��rewindֱ���ƶ�����ʼ��λ��: %ld\n", ftell(file_ptr));
//
//	// �ر��ļ�
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
//                printf("��ȡ�ַ���ʧ��!\n");
//            }
//
//            if (fscanf_s(stream, "%lds", &l) != 1) {
//                printf("��ȡldʧ�ܣ�\n");
//            }
//
//            if (fscanf_s(stream, "%f", &fp) != 1) {
//                printf("��ȡlfʧ�ܣ�\n");
//             }
//
//            if (fscanf_s(stream, " %c", &c, 1) != 1) {
//                printf("��ȡlfʧ��");
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

// fprintf:������д�뵽�ļ���
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
//		printf("�޷����ļ�����д�������\n");
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
//	printf("����д����ɣ�\n");
//
//
//	return 0;
//}


 // ferror: ����ļ����Ƿ��д��󷢳��������ط���ֵ��
 // feof: ����Ƿ�ﵽ�ļ�����ĩβ�����ط���ֵ��
 // clearerr: ����������־

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
//		perror("�޷����ļ�");
//		return EXIT_FAILURE;
//	}
//
//	while (fgets(buffer, sizeof(buffer), file_ptr) != NULL){
//		printf("%s", buffer);
//	}
//
//	if (ferror(file_ptr)) {
//		perror("��ȡ�ļ�ʱ�����˴���!");
//		clearerr(file_ptr);
//	}
//
//	if (feof(file_ptr)) {
//		printf("�Ѿ������ļ���ĩβ...\n");
//	}
//
//	else {
//		printf("�ļ�δ����ĩβ�� ���ܷ����˴���\n");
//	}
//
//	if (fclose(file_ptr) != 0) {
//		perror("Error closing file");
//		return EXIT_FAILURE;
//	}// ��"r"fclose(file_ptr)����
//
//	return 0;
//}
// �ú�������
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
//	// All other files are closed(����)
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
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
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
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
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
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	/*�ļ��Ѿ���Ϊ"w"ģʽ������ʲô�����������ļ����ݻᱻ��գ�����д���κ����ݡ�*/
//	fclose(file_ptr);
//}

// �޸ļ��±��е�����
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
//	const char* search_str = "������";
//
//	const char* replace_str = "������";
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
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
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
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
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
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
//
//		fprintf(stderr, "Failed to open config file for reading: %s\n", error_msg);
//		exit(EXIT_FAILURE);
//	}
//
//	/*�ļ��Ѿ���Ϊ"w"ģʽ������ʲô�����������ļ����ݻᱻ��գ�����д���κ����ݡ�*/
//	fclose(file_ptr);
//}
//
//errno_t update_log_record_s(const char* filename, const char* search_str, const char* replace_str) {
//	if (filename == NULL || search_str == NULL || replace_str == NULL) {
//		return EINVAL; // ������Ч��������
//	}
//
//	FILE* file_ptr = NULL;
//
//	errno_t err = fopen_s(&file_ptr, filename, "r+");
//
//	if (err != 0 || file_ptr == NULL) {
//		char error_msg[256];
//
//		strerror_s(error_msg, sizeof(error_msg), error_msg);// ��������Ϣ�ŵ�������
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
//			break;  // �ҵ���һ��ƥ����֮������ֹͣ
//		}
//	}
//
//	if (found) {
//		fseek(file_ptr, position, SEEK_SET);	// �ƶ��ص��ҵ���¼��λ��
//	}
//
//	// �����滻�ı���ԭ�ı��ĳ��Ȳ���
//	size_t replace_len = strlen(replace_str);
//	size_t search_len = strlen(search_str);
//
//	if (replace_len > BUFFER_SIZE || search_len > BUFFER_SIZE) {
//		fclose(file_ptr);
//
//		return ERANGE; // ���ش����룬��ʾ�ַ������ȳ�����Χ
//	}
//
//	// д���¼�¼֮ǰ���������λ�õ�������
//	memset(buffer, ' ', strlen(buffer) - 1);// �ÿո���䣬�����ļ���С����
//
//	buffer[strlen(buffer) - 1] = '\n'; // �������з�
//
//	fseek(file_ptr, position, SEEK_SET);	// ���»ص�����еĿ�ʼ
//
//	fputs(buffer, file_ptr); // ���ԭ���е�����
//
//	fseek(file_ptr, position, SEEK_SET); // ���»ص�����еĿ�ʼ
//
//	int result = fputs(replace_str, file_ptr);  // д���滻���ַ���
//
//	if (result == EOF) {
//		fclose(file_ptr);
//		return errno;
//	}
//
//	else {
//		fclose(file_ptr);
//		return ENOENT; // ����δ�ҵ���ƥ����
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
//	// д������
//
//	/*GameSettings settings = { 0.75, 1920, 1080, 2};
//
//	save_game_settings(&settings, "C:\\Users\\HYD2357\\Desktop\\zhangsan.log");*/
//
//	GameSettings loaded_settings;
//
//	load_game_settings(&loaded_settings, "C:\\Users\\HYD2357\\Desktop\\zhangsan.log");
//
//	printf("��Ϸ�����Ѿ�����!\n");
//
//	printf("������%f\n�ֱ��ʣ�%dx%d\n�Ѷ�: %d\n",
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
//	errno_t err = fopen_s(&file, filename, "rb"); // b:������
//	if (err != 0 || file == NULL) {
//		perror("�޷����ļ����ж�ȡ����");
//		return;
//	}
//
//	fread(settings, sizeof(GameSettings), 1, file);
//	fclose(file);
//}
//// ������Ϸ����
//void save_game_settings(const GameSettings* settings, const char* filename) {
//	FILE* file;
//	errno_t err = fopen_s(&file, filename, "wb"); // b:������
//	if (err != 0 || file == NULL) {
//		perror("�޷����ļ�����д�����");
//		return;
//	}
//
//	fwrite(settings, sizeof(GameSettings), 1, file);// ������ �ṹ���С ÿ�ζ�ȡ������������ ָ�� 
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
//		perror("�޷�����Դ��");
//		return EXIT_FAILURE;
//	}
//
//	err = fopen_s(&target_file, target_path, "wb");
//
//	if (err != 0 || source_file == NULL) {
//		perror("�޷���Ŀ���ļ�");
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
//	puts("�ļ��������");
//
//	return 0;
//}