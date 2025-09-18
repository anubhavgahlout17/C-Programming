
#include<stdio.h>             // count vowel and consonant in an string
#include<string.h>
int main(){
    char name[10] = "Anubhav";
    char vowels = 0;
    char consonant = 0;
    char n = strlen(name);
    

    for (int i = 0; i < n; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'|| name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            vowels++;
        }
        else{
            consonant++;
        }
        
    }
    
    printf("Vowels: %d\n",vowels);
    printf("Consonant: %d\n",consonant);
    return 0;

}