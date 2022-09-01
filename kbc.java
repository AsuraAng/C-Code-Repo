import java.util.*;


public class kbc {

    static boolean expert = true;
    static boolean fifty = true;
    static boolean flip = true;
    static boolean audiencepoll = true;


    public static void main(String[] args) 
    {
        System.out.println("Welcome to The Show .....Kaun Banega Crorepati...");
        System.out.println(" ");
        System.out.println(" And We Are Your HANDSOME HOSTS ANUGRAH YADAV (2K21/B13/46) AND ANSHUL KHANDELWAL (2K20/B13/45)");
        Map<Integer, String> questions = new HashMap<>();
        Map<Integer,List<String>> options = new HashMap<>();
        Map<Integer,Character> answers = new HashMap<>();
        Map<Integer, String> amount = new HashMap<>();

        amount.put(1,"1000");
        amount.put(1,"5000");
        amount.put(1,"10,000");
        amount.put(1,"20,000");
        amount.put(1,"40,000");
        amount.put(1,"80,000");
        amount.put(1,"1,60,000");
        amount.put(1,"3,20,000");
        amount.put(1,"6,40,000");
        amount.put(10,"10,00,000");

        String amountWon = "0";

        questions.put( 1 , "India is a Fedral Union comprising of Twenty-Nine states and How many Union Territories ?");
        String[] array = {"A. 6","B. 7","C. 8","D. 9"};
        options.put( 1 , Arrays.asList(array));
        answers.put(1,'B');

        questions.put(2, "Which of the following is the Capital of Arunachal Pradesh ?");
        array = new String[]{"A. Itanagar","B. Dispur","C. Imphala","D. Panaji"};
        options.put(2,Arrays.asList(array));
        answers.put(2,'A');

        questions.put(3, "What is the Major Languages Spoken in Andhra Pradesh ?");
        array = new String[]{"A. English & Telugu","B. Telugu & Urdu","C. Telugu & Kannada","D. All of these"};
        options.put(3,Arrays.asList(array));
        answers.put(3,'B');

        questions.put(4, "What is the state flower of Harayana ?");
        array = new String[]{"A. Rhodedendron","B. Golden Shower","C. Lotus","D. None of these"};
        options.put(4,Arrays.asList(array));
        answers.put(4,'C');

        questions.put(5,"Which of the following states is not located in North ?");
        array = new String[]{"A. Jammu & Kashmir","B. Himachal Pradesh","C. Haryana","D. Jharkhand"};
        options.put(5,Arrays.asList(array));
        options.put(5,'D');

        questions.put(6,"In which state is the main Language Khasi ?");
        array = new String[]{"","","",""}


    }
    
}
