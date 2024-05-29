#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>

#define BUFFER_SIZE 128

void readFile(const char* path) {
    FILE* file = fopen(path, "r");
    if (!file) {
        printf("Could not access file %s\n", path);
        return;
    }
    char content[BUFFER_SIZE];
    size_t charsCount = fread(content, 1, BUFFER_SIZE - 1, file);
    content[charsCount] = '\0';
    printf("Read %zu chars of %s:\n", charsCount, path);
    printf("%.*s\n", (int)charsCount, content);
    fclose(file);
}

void writeFile(const char* path) {
    FILE* file = fopen(path, "w");
    if (!file) {
        printf("Could not access file %s\n", path);
        return;
    }
    const char* content = "Hello. My name is Lilekov Vadim Olegovich and I am from the Mospolytech. I love studying to be a programmer. It's super exciting";
    size_t bytesWritten = fwrite(content, 1, strlen(content), file);
    fclose(file);
    printf("Written %zu bytes to %s\n", bytesWritten, path);
}

void helpMenu() {
    printf("Usage:\n");
    printf("To read a file: PassThroughClient r <filename>\n");
    printf("To write to a file: PassThroughClient w <filename>\n");
    printf("To display this help menu: PassThroughClient h\n");
}

int main(int argc, char* argv[]) {
    if (argc == 2) {
        if (!strcmp(argv[1], "h")) {
            helpMenu();
        }
        else {
            readFile(argv[1]);
        }
    }
    else if (argc == 3) {
        if (!strcmp(argv[1], "r")) {
            readFile(argv[2]);
        }
        else if (!strcmp(argv[1], "w")) {
            writeFile(argv[2]);
        }
    }
    else {
        printf("Wrong arguments!\n");
        printf("Run 'PassThroughClient h' to get help\n");
    }
    return 0;
}
