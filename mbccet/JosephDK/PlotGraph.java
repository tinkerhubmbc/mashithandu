import java.util.Scanner;
class PlotGraph{
public static String[][] plotPoint(String[][] plot){
    int x=0, y=0;
    Scanner sc = new Scanner(System.in);
    boolean bool = true;
    while(bool) {
        System.out.println("Enter x coordinate between 0 and 5: ");
        x = sc.nextInt();
        System.out.println("Enter y coordinate between 0 and 5: ");
        y = sc.nextInt();

        if(x>=5||x<0||y>=5||y<0) {
            System.out.println("The coordinates entered exceed the limit.");
        }else {
            bool=false;
        }
    }
    plot[y][x] = "x";
    return plot;

}

 public static void main(String [] args) {
    int h=0;
    Scanner sc = new Scanner(System.in);
    String [][] strArr = new String[6][6];
    char c='.';
    for(int i = 0; i<6; i++) {
        for(int j = 0; j<6; j++) {
                strArr[i][j]= Character.toString(c);            }
    }
    String[][] nStrArr = new String[7][7];
    nStrArr = plotPoint(strArr);
    for(int i = 5; i>=0; i--) {
        for(int j = 0; j<6; j++) {
            System.out.print(nStrArr[i][j]+ " ");
        }
        System.out.println();
    }
}
}
