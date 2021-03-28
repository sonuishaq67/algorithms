import java.util.Scanner;
    class bubble {
    public static void main(String args[]){
        System.out.println("Enter the array size ");
        int n;
        Scanner s = new Scanner(System.in);
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the array elements ");
       for(int i=0;i<n;i++){
           arr[i]=s.nextInt();
       }
      // System.out.println("Array after bubble sort  ");
       bubble bc = new bubble();
       bc.bubblesort(arr);
       System.out.println(" Array after sorting is ");
       for(int a=0;a<n;a++){
        System.out.println(arr[a]);
       }
    }
             void bubblesort(int arr[]){
                 int n = arr.length;
                 int temp=0;
                 for(int i=0;i<n;i++){
                     for(int j=0;j<n-i-1;j++){
                         if(arr[j]>arr[j+1]){
                              temp=arr[j];
                              arr[j]=arr[j+1];
                              arr[j+1]=temp;
                         }
                     }
                 }
             }
    
}
