
class main{
    public static void main(String[] args) {
        
         String s="sdaduyailosjd";
    char target='o';
    int ans = -1;

    for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i)==target){
                ans=i;
                break;
            }
    }

    System.out.print(ans);   
}
}