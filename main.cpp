#include <iostream>
#include <string>
#include <sstream>  // For stringstream
#include <algorithm>  // For transform
#include <vector>  // For inventory
#include <cctype>  // For isspace

using namespace std;
void clearScreen();// this function clears the screen
void wizardGraphic();
void village1();
void graphic1();//forest ASCII graphic
void graphic2();
void grapics3();
void menu();// this is the menu
void startAdventure();
void firstChoice();
void declineSword();
void swordpickup();
void secondChoice();
void thirdChoice();
void endingGood();
void endingBad();
void endingNeutral();
bool findPhrase(const string& input, const string& phrase);
void addItem(const string& item);
void checkInventory();
bool hasItem(const string& item);

vector<string> inventory;  // Global inventory

int main() {
    menu();
    graphic1();
    startAdventure();
    
    return 0;
}


void menu() {
    
    string  menuInput;
    
    cout << "                  T~~      \n";
    cout << "                  |        \n";
    cout << "                 /\"\\       \n";
    cout << "         T~~     |'| T~~   \n";
    cout << "     T~~ |    T~ WWWW|     \n";
    cout << "     |  /\"\\   |  |  |/\\T~~ \n";
    cout << "    /\"\\ WWW  /\"\\ |' |WW|   \n";
    cout << "   WWWWW/\\| /   \\|'/\\|/\"\\  \n";
    cout << "   |   /__\\/]WWW[\\/__\\WWWW \n";
    cout << "   |   WWWW'|I_I|'WWWW'  | \n";
    cout << "   |   |' |/  -  \\|' |'  | \n";
    cout << "   |'  |  |LI=H=LI|' |   | \n";
    cout << "   |   |' | |[_]| |  |'  | \n";
    cout << "   |   |  |_|###|_|  |   | \n";
    cout << "   '---'--'-/___\\-'--'---' \n";
    cout << "\n";
    cout << "!! Welcome to CYOA 1 !!\n\n";
    cout << "   You are a knight trying to defend his kingdom from those who try and destroy it\n";
    cout << "   Battle errupted and you seem to be the only survivor\n\n ";
    cout << "***NOTE: The game has an inventorty system, type 'inventory' to access it \n\n";
    cout << "   PRESS ENTER TO START\n";
    getline(cin,menuInput );
    clearScreen();
}

void clearScreen() {
    system("cls");
}

void village1() {


   
        cout << "     ~         ~~          __\n";
        cout << "        _T      .,,.    ~--~ ^^ \n";
        cout << "  ^^   // \\\\                    ~ \n";
        cout << "       ][O]    ^^      ,-~ ~ \n";
        cout << "     /''-I_I         _II____ \n";
        cout << "  __/_  /  \\\\ ______/ ''  /'\\_,__ \n";
        cout << "    |II--''''\\\\,--:--..,_/,.-{ }, \n";
        cout << "  ;'/__\\,.--';|   |[] .-.| O{ _ } \n";
        cout << " :' |  | []  -|   ''--:.;[,.'\\\\,/ \n";
        cout << "    |[]|,.--'' '',   ''-,.     | \n";
        cout << "   ..    ..-''    ;       ''.  ' \n";

    
    

}

void wizardGraphic() {
    cout << "                             /\\\n";
    cout << "                            /  \\\n";
    cout << "                           |    |\n";
    cout << "                         --:'''':--\n";
    cout << "                           :'_' :\n";
    cout << "                           _:\"\":\\___\n";
    cout << "            ' '      ____.' :::     '._\n";
    cout << "           . *=====<<=)           \\    :\n";
    cout << "            .  '      '-'-'\\_      /'._.'\n";
    cout << "                             \\====:_ \"\"\n";
    cout << "                            .'     \\\\\n";
    cout << "                           :       :\n";
    cout << "                          /   :    \\\n";
    cout << "                         :   .      '.\n";
    cout << "         ,. _        snd :  : :      :\n";
    cout << "      '-'    ).          :__:-:__.;--'\n";
    cout << "    (        '  )        '-'   '-'\n";
    cout << " ( -   .00.   - _\n";
    cout << "(    .'  _ )     )\n";
    cout << "'-  ()_.\\\\,\\\\   -\n";



}


void graphic1() {
    cout << "\n";
    cout << "                           ;                       \n";
    cout << "         ;               ~~`~~      ;              \n";
    cout << "        ~`~             ~~`~~`~    `~`             \n";
    cout << "       ~~`~~           `~~~`~~~~  `~`~`    ,        \n";
    cout << "      ~~`~~`~           ~`~~~`~   `~`~`\"_ /O\\\"\\    \n";
    cout << "    ~`~~`~~`~~~        ~~~`~~~`~   ~|`~_ |[|##|    \n";
    cout << "     `~~`~~~`~          ~~~|~~~`      '_--...__    \n";
    cout << "      ~`~|~\\_~\\   __/¯¯)   |     _- _-  _       _  \n";
    cout << "         |   |/     .'( )  |              _- _-  _ \n";
    cout << "         |  / -\\   __`/\\ \\ |_- _- ¯_  -            \n";
    cout << "      _____/ /--'(^,__ /\\ \\     //\\       _        \n";
    cout << "    /'       \\      | |  \\ \\    ||\\\\_- _-  _       \n";
    cout << "     \\....( /       ;;;___;;;  /||~~`~~            \n";
    cout << "      ||   \\\\          | |   _/ ||~~~`~~~ -        \n";
    cout << "      \\\\    \\\\         |=|  /_( ||~~`~~~`      _   \n";
    cout << "       \\\\_   \\\\    , (__|    _  ~~~~`~~~_- _-  _  \n";
    cout << "   _- _-  _   -   <`_\\ __; _-  _  ~~~`~~           \n";
    cout << "    _   -    _   -  (_ __)     _    ~~;~~     -_   \n";
    cout << "       _- _-  _    < / < \\  _-  _    -     _-   _  \n\n";
}

void graphic2() {
    cout << "                   _.._ \n";
    cout << "   _________....-~    ~-.______\n";
    cout << "~~~                            ~~~~-----...___________..--------\n";
    cout << "                                           |   |     |\n";
    cout << "                                           | |   |  ||\n";
    cout << "                                           |  |  |   |\n";
    cout << "                                           |'. .' .`.|\n";
    cout << "___________________________________________|0oOO0oO0o|____________\n";
    cout << " -          -         -       -      -    / '  '. ` ` \\    -    -\n";
    cout << "      --                  --       --   /    '  . `   ` \\    --\n";
    cout << "---            ---          ---       /  '                \\ ---\n";
    cout << "     ----               ----        /       ' ' .    ` `    \\  ----\n";
    cout << "-----         -----         ----- /   '   '        `      `   \\\n";
    cout << "     ------          ------     /          '    . `     `    `  \\\n";
    cout << "   ----     -------           /  '    '      '      `\n";
    cout << "                    --------/     '     '   '\n\n";

}


void graphic3() {


    cout << "             />\n";
    cout << "            /<\n";
    cout << "           /<\n";
    cout << " |\\_______{o}-------------------------------------------------------------->\n";
    cout << "[\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\{*}:::<================================================-  >\n";
    cout << " |/~~~~~~~{o}-------------------------------------------------------------->\n";
    cout << "           \\<\n";
    cout << "            \\<\n";
    cout << "             \\>\n\n";

    
}


void startAdventure() {
    cout << "==>You wake up in a mysterious forest, your body aching as if you've traveled a great distance.\n";
    cout << "   A deep longing for home tugs at your heart, but the serenity of the forest almost soothes your weariness.\n";
    cout << "   The air is filled with the sweet scent of blooming flowers, and the gentle hum of bees busy at work.\n";
    cout << "   Despite the calm, a sense of urgency stirs within you.\n";
    cout << "\n";
    string input;
    cout << "   What do you want to do?\n";
    cout << "\n";
    getline(cin, input);

    if (findPhrase(input, "explore")|| findPhrase(input, "walk")|| findPhrase(input, "find ")|| findPhrase(input, "search")|| findPhrase(input, "investigate")|| findPhrase(input, "search")||
        findPhrase(input, "scout")
        )// ^^ library of general words and phrases for first input
    {
        clearScreen();
        graphic2();
        firstChoice();
       
    }
   // =============================fun and extras============================================================================== 
    else if (findPhrase(input, "cry")|| findPhrase(input, "weep"))
    {
        cout << "\nYou give yourself some time to mourne all those that have been lost in battle \n";
        cout << "but TIME IS OF THE ESSENCE and you collect your bearings\n\n";
        startAdventure();
    }
    
    else if (findPhrase(input, "eat")|| findPhrase(input, "drink")|| findPhrase(input, "consume"))
    {
        cout << "\nYou have no food or water on your persons. Maybe theres something out in the forest?\n\n";
        startAdventure();
    }
    
    else if (findPhrase(input, "hunt")) 
    {
        cout << "\nYou have no weapons nor tools to hunt. Hunting by hand would be ineffective \n\n";
        startAdventure();
    }
    
    
    else if (findPhrase(input, "remember" )) 
    {
       cout << "your head is rattled making rembering impossible\n";
       cout << "\n";
       startAdventure();
    }
    
    else if (findPhrase(input, "stay") || findPhrase(input, "sleep") || findPhrase(input, "nap") || findPhrase(input, "camp") || findPhrase(input, "rest") || findPhrase(input, "slumber") ||
        findPhrase(input, "snooze")
        )// ^^ library of general words and phrases for first input 
    {
        endingNeutral();
    }
    else if (findPhrase(input, "inventory")) {
        checkInventory();
        startAdventure();
    }
    else {
        cout << "I didn't understand that. Please try again.\n";
        startAdventure();
    }
  
    
}



void firstChoice() {
    int swordNum;
    string input;
    
    cout << "==>You begin to explore the forest, each step crunching softly on the leaf-strewn ground.\n";
    cout << "   As you push through the dense underbrush, a narrow path emerges, winding through the towering trees.\n";
    cout << "\n";
    cout << "   What do you want to do?\n";
    getline(cin, input);

    if (findPhrase(input, "follow")|| findPhrase(input, "continue")||findPhrase(input, "take")||findPhrase(input, "explore") || findPhrase(input, "walk") || 
        findPhrase(input, "search") || findPhrase(input, "investigate") || findPhrase(input, "search") ||findPhrase(input, "scout")
         )
    {
        graphic3();
        cout << "==>As you continue, the glint of some metal half-buried in the earth catches your attention.\n";
        cout << "   You approach and discover its a sharp sword on the ground probably from a previous battle\n\n";
        cout << "   PRESS 1) PICK UP SWORD\n";
        cout << "         2) SOMEONE WILL PROBABLY CLAIM IT?\n\n ";
        cin >> swordNum;
        cin.ignore();
        if (swordNum==1)
        {
            if (!hasItem("sword")) {  // Prevent picking up the sword multiple times
                addItem("sword");
                swordpickup();
            }
            else {
                cout << "You already have the sword.\n";
                firstChoice();  // Allow the player to continue after picking up the sword
            }
            secondChoice();
        }

        else if (swordNum==2)  {
            declineSword();
        }

        else {
            cout << "\n Invalid input\n\n";
            firstChoice();
        }
        

    }
    else if (findPhrase(input, "ignore")|| findPhrase(input, "stay") || findPhrase(input, "sleep") || findPhrase(input, "nap") || findPhrase(input, "camp") || findPhrase(input, "rest") || findPhrase(input, "slumber") ||
        findPhrase(input, "snooze") || findPhrase(input, "ignore") || findPhrase(input, "go the other way") || findPhrase(input, "find another") )
    {
        endingBad();
    }
   
    else if (findPhrase(input, "inventory")) {
        checkInventory();
        firstChoice();
    }
    else {
        cout << "I didn't understand that. Please try again.\n";
        firstChoice();
    }
}

void declineSword() {
    
    string input;
  
    cout << "\nYou leave the sword and stare at the path ahead \n\n";
    cout << "What do you want to do?\n";

    getline(cin, input);
    if (findPhrase(input, "follow")) {
        clearScreen();
        village1();
        secondChoice();
    }
    else if (findPhrase(input, "ignore")) {
        endingBad();
    }
    else if (findPhrase(input, "inventory")) {
        checkInventory();
        swordpickup();
    }
    else {
        cout << "I didn't understand that. Please try again.\n";
        declineSword();
    }

}


void swordpickup() {
    cout << "\n";
    cout << "==>CONGRATULATIONS! You've picked up the sword and have the path ahead of you.\n\n";
    cout << "   What do you want to do?\n";
    cout << "   Type your action (e.g., 'I'll follow the path', 'I want to ignore the path', or 'pick up sword').\n";
    cout << "\n";
    string input;
    getline(cin, input);
    if (findPhrase(input, "follow")) {
        clearScreen();
        village1();
        secondChoice();
    }
    else if (findPhrase(input, "ignore")) {
        endingBad();
    }
    else if (findPhrase(input, "inventory")) {
        checkInventory();
        swordpickup();
    }
    else {
        cout << "I didn't understand that. Please try again.\n";
        swordpickup();
    }
}

void secondChoice() {
    cout << "\n";
    cout << "==>You follow the path and arrive at a small village. You encounter a guard blocking the entrance.\n";
    cout << "   The guard looks at you suspiciously. What do you want to do?\n";
    cout << "   Type your action (e.g., 'I'll enter the village', 'I want to turn back', or 'show sword').\n";
    cout << "\n";
    string input;
    getline(cin, input);

    if (findPhrase(input, "enter") && hasItem("sword")) {
        cout << "The guard sees your sword and lets you pass. You enter the village.\n";
        thirdChoice();
    }
    else if (findPhrase(input, "enter")) {
        cout << "The guard doesn't trust you and refuses to let you in.\n";
        secondChoice();
    }
    else if (findPhrase(input, "turn back")) {
        endingBad();
    }
    else if (findPhrase(input, "show sword")) {
        if (hasItem("sword")) {
            cout << "You show the guard your sword. He nods in approval and lets you pass.\n";
            thirdChoice();
        }
        else {
            cout << "You don't have a sword to show!\n";
            secondChoice();
        }
    }
    else if (findPhrase(input, "inventory")) {
        checkInventory();
        secondChoice();
    }
    else {
        cout << "I didn't understand that. Please try again.\n";
        secondChoice();
    }
}

void thirdChoice() {
    cout << "\n";
    cout << "You enter the village and find a place to rest. What do you want to do?\n";
    cout << "Type your action (e.g., 'rest', 'explore the village').\n";
    cout << "\n";
    string input;
    getline(cin, input);

    if (findPhrase(input, "rest")) {
        endingGood();
    }
    else if (findPhrase(input, "explore")) {
        cout << "You explore the village and find a treasure chest. Inside, you find a magical amulet.\n";
        addItem("amulet");
        cout << "You picked up the amulet.\n";
        thirdChoice();
    }
    else if (findPhrase(input, "inventory")) {
        checkInventory();
        thirdChoice();
    }
    else {
        cout << "I didn't understand that. Please try again.\n";
        thirdChoice();
    }
}

void endingGood() {
    cout << "You rest peacefully and wake up refreshed. The villagers are kind, and you live happily ever after. You win!\n";
}

void endingBad() {
    cout << "You wander aimlessly and are eventually lost forever in the forest. You lose.\n";
}

void endingNeutral() {
    cout << "You decide to stay where you are. Eventually, someone finds you and helps you out of the forest, but the adventure is over. Neutral ending.\n";
}

// Function to find a phrase in the input string
bool findPhrase(const string& input, const string& phrase) {
    // Convert both input and phrase to lowercase for case-insensitive matching
    string lowerInput = input;
    string lowerPhrase = phrase;
    transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);
    transform(lowerPhrase.begin(), lowerPhrase.end(), lowerPhrase.begin(), ::tolower);

    // Check if the phrase is found within the input
    if (lowerInput.find(lowerPhrase) != string::npos) {
        return true;
    }

    return false;
}

// Function to add an item to the inventory
void addItem(const string& item) {
    inventory.push_back(item);
}

// Function to check if an item is in the inventory
bool hasItem(const string& item) {
    return find(inventory.begin(), inventory.end(), item) != inventory.end();
}

// Function to check and display the inventory
void checkInventory() {
    if (inventory.empty()) {
        cout << "Your inventory is empty.\n";
        cout << "\n";
    }
    else {
        cout << "You have the following items in your inventory:\n";
        for (const string& item : inventory) {
            cout << "- " << item << endl;
        }
    }
}
