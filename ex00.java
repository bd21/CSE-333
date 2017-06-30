

class ex00 {
    public ex00() {
    }

    public static boolean check(String candidatePassword) {
	    return false;
    }

    public static void main(String[] args) {
      ex00 checker = new ex00();
 for(char a = 'a'; a <= 'z'; a++) {
  for(char b = 'a'; b <= 'z'; b++) {
    for(char c = 'a'; c <= 'z'; c++) {
      for(char d = 'a'; d <= 'z'; d++) {
        for(char e = 'a'; e <= 'z'; e++) {
          for(char f = 'a'; f <= 'z'; f++) {
            for(char g = 'a'; g <= 'z'; g++) {
              check("" +a+b+c+d+e+f+g);
            }
          }
        }
      }
    }
  }
}  

	
    }
}
