#include <stdio.h>
#include <stdbool.h>

#define MAX_SUB 50

typedef struct {
    char name[50];
    float score10;
    float score4;
    int credit;
    bool isGDTC;        // Giáo d?c th? ch?t
    bool isDieuKien;    // GDQP-AN, Ngo?i ng? CB, Tin h?c CB
} Subject;

// Quy d?i di?m thang 10 sang thang 4
float convertToScale4(float score10) {
    if (score10 >= 9.0) return 4.0;
    if (score10 >= 8.0) return 3.5;
    if (score10 >= 7.0) return 3.0;
    if (score10 >= 6.5) return 2.5;
    if (score10 >= 5.5) return 2.0;
    if (score10 >= 5.0) return 1.5;
    if (score10 >= 4.0) return 1.0;
    return 0.0; // Ði?m F
}

int main() {
    float prevGPA = 0.0;
    int prevCredits = 0;
    int n;
    Subject subs[MAX_SUB];

    printf("===========================================\n");
    printf("   HE THONG TINH DIEM DTBHK VA DTBCTL\n");
    printf("===========================================\n");

    // 1. Nh?p thông tin tích luy k? tru?c
    printf("--> NHAP THONG TIN TICH LUY KY TRUOC:\n");
    printf("  + DTBCTL ky truoc (he 4): ");
    scanf("%f", &prevGPA);
    printf("  + Tong so tin chi tich luy ky truoc: ");
    scanf("%d", &prevCredits);

    // 2. Nh?p các môn h?c k? này
    printf("\n--> NHAP CAC MON HOC HOC KY NAY:\n");
    printf("Nhap so luong mon hoc ky nay: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So luong mon khong hop le!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Mon %d ---\n", i + 1);
        printf("Ten mon hoc: ");
        scanf(" %[^\n]", subs[i].name);

        printf("Diem thang 10: ");
        scanf("%f", &subs[i].score10);
        subs[i].score4 = convertToScale4(subs[i].score10);

        printf("So tin chi: ");
        scanf("%d", &subs[i].credit);

        int choiceGDTC, choiceDK;
        printf("Co phai GDTC khong? (1: Co, 0: Khong): ");
        scanf("%d", &choiceGDTC);
        subs[i].isGDTC = (choiceGDTC == 1);

        if (!subs[i].isGDTC) {
            printf("Co phai HP dieu kien khac (GDQP/NN CB/Tin CB)? (1: Co, 0: Khong): ");
            scanf("%d", &choiceDK);
            subs[i].isDieuKien = (choiceDK == 1);
        } else {
            subs[i].isDieuKien = false;
        }
    }

    // 3. Tính ÐTBHK (Ch? b? GDTC, gi? l?i F và HP di?u ki?n khác)
    float sumHK = 0.0;
    int creditHK = 0;

    for (int i = 0; i < n; i++) {
        if (!subs[i].isGDTC) {
            sumHK += subs[i].score4 * subs[i].credit;
            creditHK += subs[i].credit;
        }
    }

    // 4. Tính ÐTBCTL riêng c?a k? này (B? GDTC, b? HP di?u ki?n, b? F)
    float sumTL_KyNay = 0.0;
    int creditTL_KyNay = 0;

    for (int i = 0; i < n; i++) {
        bool isCondition = subs[i].isGDTC || subs[i].isDieuKien;
        bool isFailed = (subs[i].score4 == 0.0);

        if (!isCondition && !isFailed) {
            sumTL_KyNay += subs[i].score4 * subs[i].credit;
            creditTL_KyNay += subs[i].credit;
        }
    }

    // 5. G?p v?i tích luy k? tru?c d? ra ÐTBCTL hi?n t?i
    int totalCreditsTL = prevCredits + creditTL_KyNay;
    float currentCumulativeGPA = 0.0;

    if (totalCreditsTL > 0) {
        currentCumulativeGPA = ((prevGPA * prevCredits) + sumTL_KyNay) / totalCreditsTL;
    }

    // In k?t qu?
    printf("\n===========================================\n");
    printf("               KET QUA DIEM                \n");
    printf("===========================================\n");

    if (creditHK > 0) {
        printf("-> DTBHK (Diem TB H?c K? nay)  : %.2f (Tong TC tinh: %d)\n", sumHK / creditHK, creditHK);
    } else {
        printf("-> DTBHK: Khong co mon phu hop de tinh.\n");
    }

    printf("-------------------------------------------\n");
    printf("-> So TC tich luy moi ky nay   : +%d TC\n", creditTL_KyNay);
    printf("-> Tong TC tich luy hien tai   : %d TC\n", totalCreditsTL);
    printf("-> DTBCTL DEN HIEN TAI (He 4)  : %.2f\n", currentCumulativeGPA);
    printf("===========================================\n");

    return 0;
}
