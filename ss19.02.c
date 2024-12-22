#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void initializeStudents(Student students[], int *currentLength);
void addStudent(Student students[], int *currentLength);
void sortStudentsByName(Student students[], int currentLength);
void printStudents(const Student students[], int currentLength);

int main() {
    Student students[50];
    int currentLength = 0;

    initializeStudents(students, &currentLength);

    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);

    sortStudentsByName(students, currentLength);

    printf("Danh sach sinh vien sau khi sap xep theo ten:\n");
    printStudents(students, currentLength);

    return 0;
}

void initializeStudents(Student students[], int *currentLength) {
    *currentLength = 5;

    students[0] = (Student){1, "Nguyen Van A", 20, "0123456789"};
    students[1] = (Student){2, "Le Thi B", 21, "0987654321"};
    students[2] = (Student){3, "Tran Van C", 22, "0912345678"};
    students[3] = (Student){4, "Pham Thi D", 19, "0945678912"};
    students[4] = (Student){5, "Do Van E", 23, "0967891234"};
}

void addStudent(Student students[], int *currentLength) {
    if (*currentLength >= 50) {
        printf("Khong the them sinh vien moi. Mang da day.\n");
        return;
    }

    Student newStudent;
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    getchar();

    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    getchar();

    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    students[*currentLength] = newStudent;
    (*currentLength)++;

    printf("Da them sinh vien moi thanh cong.\n");
}

void sortStudentsByName(Student students[], int currentLength) {
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void printStudents(const Student students[], int currentLength) {
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

