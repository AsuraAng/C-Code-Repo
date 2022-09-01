import java.util.*;
public class Main
{

    static boolean expert = true,fifty = true, flip = true,audiencePoll = true;
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.println("\n Welcome to QUIZ😇!");
        System.out.println("Rules: ");
        System.out.println("");
        Map<Integer,String> questions = new HashMap<>();
        Map<Integer,List<String>> options = new HashMap<>();
        Map<Integer,Character> answers = new HashMap<>();
        Map<Integer,String> amount = new HashMap<>();

        amount.put(1,"1,000");
        amount.put(2,"5,000");
        amount.put(3,"10,000");
        amount.put(4,"20,000");
        amount.put(5,"40,000");
        amount.put(6,"80,000");
        amount.put(7,"1,60,000");
        amount.put(8,"3,20,000");
        amount.put(9,"6,40,000");
        amount.put(10,"10,00,000");

        String amountWon = "0";

        questions.put( 1 , "India is a federal Union comprising twenty-nine states and how many union territories?");
        String[] array = {"A. 6", "B. 7","C. 8","D. 9"};
        answers.put(1,'B');

        questions.put(2,"Which of the following is the capital of Arunachal Pradesh?");
        array = new String[]{"A. Itanagar", "B. Dispur","C. Imphal","D. Panaji"};
        options.put(2,Arrays.asList(array));
        answers.put(2,'A');

        questions.put(3,"What are the major languages spoken in Andhra Pradesh?");
        array = new String[]{"A. English & Telugu", "B. Telugu & Urdu","C. Telugu & Kannada","D. All of these"};
        options.put(3,Arrays.asList(array));
        answers.put(3,'B');

        questions.put(4,"What is the state flower of Haryana?");
        array = new String[]{"A. Rhododendron", "B. Golden Shower","C. Lotus","D. None of these"};
        options.put(4,Arrays.asList(array));
        answers.put(4,'C');

        questions.put(5,"Which of the following states is not located in North?");
        array = new String[]{"A. Jammu & Kashmir", "B. Himachal Pradesh","C. Haryana","D. Jharkhand"};
        options.put(5,Arrays.asList(array));
        answers.put(5,'D');

        questions.put(6,"In which state is the main Language Khasi?");
        array = new String[]{"A. Mizoram", "B. Nagaland","C. Meghalaya","D. Tripura"};
        options.put(6,Arrays.asList(array));
        answers.put(6,'C');

        questions.put(7,"Which is the largest coffee producing state in India?");
        array = new String[]{"A. Karnataka", "B. Arunachal Pradesh","C. Tamil Nadu","D. Kerala"};
        options.put(7,Arrays.asList(array));
        answers.put(7,'A');

        questions.put(8,"Which state has the largestb area?");
        array = new String[]{"A. Maharashtra", "B. Madhya Pradesh","C. Uttar Pradesh","D. Rajasthan"};
        options.put(8,Arrays.asList(array));
        answers.put(8,'D');

        questions.put(9,"Which state has largest population?");
        array = new String[]{"A. Maharashtra", "B. Uttar Pradesh","C. Bihar","D. Andhra Pradesh"};
        options.put(9,Arrays.asList(array));
        answers.put(9,'B');

        questions.put(10,"In which state is Elephant Falls located?");
        array = new String[]{"A. Mizoram", "B. Orissa","C. Meghalaya","D. Manipur"};
        options.put(10,Arrays.asList(array));
        answers.put(10,'C');

        for(int i = 1; i <= 10; i++){
/*            System.out.println(questions.get(i));
            List<String> availableOptions = options.get(i);
            for(int j = 0; j < 4; j++){
                System.out.print(availableOptions.get(j) + "   ");
            }
            System.out.println("");
                System.out.println("Please enter your response by entering");
            if(expert || fifty || flip || audiencePoll){
                System.out.println("Press h if you want to use lifeline");
            }
            char ch = sc.next().charAt(0);
            if(ch == 'h' || ch == 'H'){
                if(expert || fifty || flip || audiencePoll){
                    System.out.println("Press h if you want to use lifeline");
                }
                else{
                    System.out.println("Sorry, you dont have any lifeline");
                }
            }
            else{
                if(Character.toLowerCase(ch) == Character.toLowerCase(answers.get(i))){
                    System.out.println("Sahi Jawab. Taliyaan bajti rehni chahiye. Kamaal kardi");
                    amountWon = amount.get(i);
                }
                else{
                    System.out.println("Nikal, Pehli fursat mei nikal!");
                    break;
                }
            }
            */
            if(askQuestion(questions.get(i),options.get(i),Character.toLowerCase(answers.get(i)))){
                amountWon = amount.get(i);
                System.out.println("Congratulations, You just won Rs." + amountWon  + ".");
            }
            else{
                break;
            }

        }
        System.out.println("You've won: " + amountWon);
        System.out.println("Kya kijiyega itne paiso ka?");
    }

    public static boolean askQuestion(String question,List<String> availableOptions,char answer){
        System.out.println(question);
        for(int j = 0; j < 4; j++){
            System.out.print(availableOptions.get(j) + "   ");
        }
        System.out.println("");
        System.out.println("Please enter your response.");
        if(expert || fifty || flip || audiencePoll){
            System.out.println("Press h if you want to use lifeline");
        }
        while(true){
            char ch = sc.next().charAt(0);
            if(ch == 'h' || ch == 'H'){
                if(expert || fifty || flip || audiencePoll){
                    System.out.println("Press h if you want to use lifeline");
                    if(flip)
                        System.out.println("Press 1 for flip the question");
                    if(fifty)
                        System.out.println("Press 2 for fifty-fifty");
                    if(audiencePoll)
                        System.out.println("Press 3 for audience poll");
                    if(expert)
                        System.out.println("Press 4 for ask the expert opinion");
                    char resp = sc.next().charAt(0);
                    switch(resp){
                        case '1' :
                            if(!flip){
                                return false;
                            }
                            System.out.println("You have selected flip the question");
                            flip = false;
                            List<String> options = new ArrayList<>();
                            options.add("A. Sardar Vallabhbhai Patel");
                            options.add("B. Pt. Jawaharlal Nehru");
                            options.add("C. Dr Rajendra Prasad");
                            options.add("D. Sardar Gian Singh Rarewala");
                            return askQuestion("Who formally inaugurated the city of Chandigarh on 7th October 1953?",options,'c');

                        case '2' :
                            if(!fifty){
                                return false;
                            }
                            fifty = false;
                            System.out.println("You have selected fifty-fifty for the question. So 2 incorrect options will be removed");
                            System.out.println("New Options are: ");
                            if(answer == 'a'){
                                System.out.println(availableOptions.get(0) + "   " + availableOptions.get(2));
                            }
                            else{
                                if(answer == 'b'){
                                    System.out.println(availableOptions.get(0) + "   " + availableOptions.get(1));
                                }
                                else{
                                    if(answer == 'c'){
                                        System.out.println(availableOptions.get(2) + "   " + availableOptions.get(3));
                                    }
                                    else{
                                        System.out.println(availableOptions.get(0) + "   " + availableOptions.get(3));
                                    }
                                }
                            }
                            System.out.println("Enter your response: ");
                            break;
                        case '3' :
                            if(!audiencePoll){
                                return false;
                            }
                            audiencePoll = false;
                            System.out.println("You have selected audiencePoll for the question");
                            System.out.println("Here is the response");
                            if(answer == 'a'){
                                System.out.println("A : 52%");
                                System.out.println("B : 20%");
                                System.out.println("C : 18%");
                                System.out.println("D : 10%");
                            }
                            else{
                                if(answer == 'b'){
                                    System.out.println("A : 20%");
                                    System.out.println("B : 52%");
                                    System.out.println("C : 18%");
                                    System.out.println("D : 10%");
                                }
                                else{
                                    if(answer == 'c'){
                                        System.out.println("A : 18%");
                                        System.out.println("B : 20%");
                                        System.out.println("C : 52%");
                                        System.out.println("D : 10%");
                                    }
                                    else{
                                        System.out.println("A : 10%");
                                        System.out.println("B : 20%");
                                        System.out.println("C : 18%");
                                        System.out.println("D : 52%");
                                    }
                                }
                            }
                            System.out.println("Enter your response: ");
                            break;
                        case '4' :
                            if(!expert){
                                return false;
                            }
                            expert = false;
                            System.out.println("I think the answer is: " + availableOptions.get(answer - 'a'));
                            System.out.println("Enter your response: ");
                            break;
                        default :
                            return false;
                    }
                }
                else{
                    System.out.println("Sorry, you dont have any lifeline!");
                }
            }
            else{
                if(Character.toLowerCase(ch) == answer){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    }

}
