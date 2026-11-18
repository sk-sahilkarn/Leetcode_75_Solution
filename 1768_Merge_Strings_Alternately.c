char * mergeAlternately(char * word1, char * word2){
    int n1=strlen(word1);
    int n2=strlen(word2);
    int n3=(n1+n2);

    char * merged;
    merged = (char*)malloc((n3+1)*sizeof(char));
    int i=0;
    int j=0;

    while(i<n3){
if(word1[j]=='\0' ){
    for(int k=i; k<n3; k++){
            merged[k]=word2[j];
            j++;
        }
        break;
}

        else if(word2[j]=='\0'){
            for(int k=i; k<n3; k++){
            merged[k]=word1[j];
            j++;
            }
            break;
        }

        else{
            merged[i]=word1[j];
            merged[i+1]=word2[j];
        }

        j++;
        i=i+2;
        }
        merged[n3]='\0';

        return merged;
    }
