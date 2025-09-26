           pass[i] = getch();
            if(pass[i] == 13) {
                pass[i] = '\0';
                break;
            } else if (pass[i] == 8) {
                if(i >0 ){
                    i--;
                    printf("\b \b");
                }
            } else {
                putchar('*');
                i++;
            }
        }