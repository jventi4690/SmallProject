#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    /*
    int awakening = 0;
    int StatStr = 5;
    int StatDef = 10;
    int StatHp = 25;
    int NameChoice = 0;
    char Name [20];
    bool MasterName = false;
    char MN [20];
    int useless1 = 0;
    int HPPot = 6;
    int useless2 = 0;
    int Health = StatHp;
    int Attack = StatStr;
    int Miss = StatDef;
    int Choice = 0;
    int MonsterAttack = 0;
    int Shard1 = 0;
    int ShardChoice1 = 0;
    int MMiss = 0;
    int WTF = 0;
    int awkward = 0;
    int Shard2 = 0;
    cout << "???: Wake up!" << endl;
    cout << "???: WAKE UP!!!" << endl;
    cout << "???: Say something to let us know that you're alive!" << endl;
    cout << endl;
    cout << endl;
    cout << "What would you like to say to the man?" << endl;
    cout << "(1)WHAT!? (2)Why? (3)Ok." << endl;
    cin >> awakening;
    cout << endl;
    if (awakening == 1)
    {
        StatStr = StatStr + 3;
        cout << "???: Heh heh, calm down tough guy!" << endl;
    }
    if (awakening == 2)
    {
        StatDef = StatDef + 7;
        cout << "???: Well, don't be a smart ass..." << endl;
    }
    if (awakening == 3)
    {
        StatHp = StatHp + 5;
        cout << "???: You don't seem to be that phased." << endl;
    }
    cout << "???: What's your name boy?" << endl;
    cout << "(1)Type your name (2)Why? Who wants to know? (3)I aint tellin' you!" << endl;
    cin >> NameChoice;
    cout << endl;
    if (NameChoice == 1)
    {
        cin >> Name;
        StatHp = StatHp + 5;
        cout << "Jorah: Well then, nice to meet you " << Name << ". My name's Ser Jorah Mormont, of" << endl << " house Friendzone." << endl;
        MasterName = true;
    }
    if (NameChoice == 2)
    {
        StatDef = StatDef + 7;
        cout << "Jorah: Fair enough, I am Ser Jorah Mormont, of house Friendzone." << endl << "Now then, who are you?" << endl;
        cin >> Name;
        cout << endl;
        cout << "Nice to meet you " << Name << "." << endl;
        MasterName = true;
    }
    if (NameChoice == 3)
    {
        StatStr = StatStr + 3;
        cout << "???: Fine then!" << endl;
        MasterName = false;
    }
    if (MasterName == true)
    {
        cout << "Jorah: What would you like to call me as a nickname?" << endl;
        cin >> MN;
    }
    if (MasterName == false)
    {
        cout << "???: but at least give me a nickname." << endl;
        cin >> MN;
    }
    cout << MN << ": Well, you don't appear to be " << endl << "too terribly hurt... let's refresh your memory " << endl << "on what happened and on how to fight!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << MN << ": It happened one day, all at once." << endl << "The miners were going through their day like every other." << endl << "They had been bringing record amounts of gold back to our town." << endl << "The miners were happy, the town was happy, but They were not." << endl << "As a large rock with a massive vein of gold was dislodged, the " << endl << "darkness was let out. They came in waves, big and small." << endl << "I and the other warriors like you " << Name << endl << "were able to fight back for some time." << endl << "Just when we thought it was over, the leaders came, accompanied by their best fighters." << endl << "It was a slaughter. We fell like flies. You put up one of the best fights I have ever seen." << endl << "You are the last warrior capable of fighting back and maybe even winning this." << endl << endl << endl << "Now, you must relearn the basics! The rest should be natural!" << endl;
    cout << "Are you ready to learn how to fight?" << endl;
    cout << "(1)Yes (2)Yes (3)Yes" << endl;
    cin >> useless1;
    cout << endl << endl << endl << endl << endl << endl;
    cout << "Here is your battle screen:" << endl << endl << endl;
    cout << Name << "                              |                        Monster" << endl;
    cout << "Health: " << StatHp << "/" << StatHp << "                  |                     10 :Health" << endl;
    cout << "Dodge: " << StatDef << "                      |                      10 :Dodge" << endl;
    cout << "Strength: " << StatStr << "                    |                   10 :Strength" << endl;
    cout << "                               |" << endl << "                               |" << endl;
    cout << "----------  -----------" << "        |        ----------  -----------" << endl;
    cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|1|  |HP Pots|2|" << endl;
    cout << "----------  -----------" << "        |        ----------  -----------" << endl;
    cout << "   0-" << StatStr << "           " << HPPot << "             |           0-10          X";
    cout << endl << endl << endl;
    cout << MN << ": Pretty self explanatory yeah?" << endl;
    cout << MN << ": You will only have 6 Health Potions (Heals 15hp) for this whole journey." << endl;
    cout << MN << ": Attempting to use one in battle (even if you don't have one) " << endl;
    cout << "will use up your turn to attack" << endl;
    cout << MN << ": A dying monster will still be able to hit you so be careful!" << endl;
    cout << MN << ": You will heal 5 after every fight!" << endl;
    cout << MN << ": Are you ready to start your fight? " << endl;
    cout << "(1)Yes (2)Yes (3)Yes" << endl;
    cin >> useless2;
    cout << endl << endl;
    MonsterAttack = 5;
    Health = StatHp;
    for (int MHP = 8; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Slimer" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                  |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                     10 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   5 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-5           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 10)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 11)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The slimer hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The slimer missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    cout << MN << ": You won your first battle!" << endl;
    cout << MN << ": That was only the weakest of the monsters, you need to defeat them all!" << endl;
    cout << MN << ": I see another!" << endl;
    cout << MN << ": It can see you really well and therefore has a higher dodge chance!" << endl;
    cout << endl << endl << endl;
    MonsterAttack = 8;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 10; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        3-Eyed Beast" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      30 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   8 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-8           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 30)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 31)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The 3-Eyed Beast hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The 3-Eyed Beast missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    cout << MN << ": Nice kill! I guess we'll SEE him later! HAHAHAHAHA" << endl;
    cout << MN << ": I'll see myself out..." << endl;
    cout << MN << ": The hard rock skin on this next creature protects it, but it's weak!" << endl;
    cout << endl << endl << endl;
    MonsterAttack = 3;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 40; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Rock Man" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      10 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   3 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-8           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 10)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 11)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The Rock Man hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The Rock Man missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    cout << "You see a glow coming from inside the rock man's body." << endl;
    cout << "(1)Reach in and take it (2)Leave it" << endl;
    cin >> ShardChoice1;
    if (ShardChoice1 == 1)
    {
        cout << "As you wrap your hands around it, you feel a warmth run through your body." << endl;
        cout << "After pulling out what looks like a shard of something, it begins to glow." << endl;
        cout << "The shard crumbles in your hands, giving you a massive dose of energy." << endl;
        cout << "What would you like to do with the excess energy?" << endl;
        cout << "(1)Upgrade max health (2)Upgrade max defense" << endl << "(3)Upgrade max damage (4)Heal to full health" << endl;
        cin >> Shard1;
        if (Shard1 == 1)
        {
            StatHp = StatHp + 5;
            cout << "You feel hungry. Really, really hungry." << endl;
        }
        if (Shard1 == 2)
        {
            StatDef = StatDef + 10;
            cout << "You feel faster. Insert racial joke here." << endl;
        }
        if (Shard1 == 3)
        {
            StatStr = StatStr + 3;
            cout << "You literally see your muscles grow. You may want to go see a doctor..." << endl;
        }
        if (Shard1 == 4)
        {
            Health = StatHp;
            cout << "You feel revitalized." << endl;
        }
    }
    MonsterAttack = 15;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 5; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Giant Arm" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      15 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   15 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-15           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 15)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 16)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The Giant Arm hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The Giant Arm missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    cout << "Cut open the monster to look for another shard?" << endl;
    cout << "(1)Yes (2)No" << endl;
    cin >> WTF;
    cout << endl << endl;
    if (WTF == 1)
    {
        cout << MN << ": Ummmmmmmmm... what in hell are you doing!?!?" << endl;
        cout << "(1)UHHHHM... (2)NO NO NO I'M JUST... (3)WAIT, LET ME EXPLAIN!" << endl;
        cin >> awkward;
        cout << endl << endl;
        cout << MN << ": Don't wanna know, just keep fighting." << endl;
    }
    cout << endl << endl << endl;
    MonsterAttack = 4;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 20; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Spirit" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      40 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   4 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-4           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 40)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 41)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The Spirit hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The Spirit missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    cout << endl << endl << endl;
    MonsterAttack = 10;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 30; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Dark Knight" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      0 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   10 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-10           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 0)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 1)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The Dark Knight hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The Dark Knight missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    cout << "You trip as you step over his body, knocking his armor off." << endl;
    cout << "You expect to just see bruises and skin but in the skins place" << endl;
    cout << "you see a metal contraption that appears to be siphoning the power of a shard!" << endl;
    cout << "You smash it open and grab the shard, feeling it's power run through your hand." << endl;
    cout << "(1)Upgrade max health (2)Upgrade max defense" << endl << "(3)Upgrade max damage (4)Heal to full health" << endl;
    cin >> Shard2;
    if (Shard2 == 1)
    {
        StatHp = StatHp + 5;
        cout << "You feel hungry. Really, really hungry." << endl;
    }
    if (Shard2 == 2)
    {
        StatDef = StatDef + 10;
        cout << "You feel faster. Insert racial joke here." << endl;
    }
    if (Shard2 == 3)
    {
        StatStr = StatStr + 3;
        cout << "You literally see your muscles grow. You may want to go see a doctor..." << endl;
    }
    if (Shard2 == 4)
    {
        Health = StatHp;
        cout << "You feel revitalized." << endl;
    }
    cout << endl << endl << endl;
    MonsterAttack = 5;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 30; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Burning Ent" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      0 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   10 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-10           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 0)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 1)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        if (MHP > 7)
        {
            srand(time(NULL));
            MMiss = rand()%100 + 1;
            if (MMiss > StatDef)
            {
                srand(time(NULL));
                Attack = rand()%MonsterAttack + 1;
                Health = Health - Attack;
                cout << "The Burning Ent hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
            }
            if (MMiss < (StatDef + 1))
            {
                cout << "The Burning Ent missed!" << endl;
            }
            if (Health < 1)
            {
                cout << "The last thing you hear is the screams from your town" << endl;
                cout << "as you fade to darkness." << endl;
                return 0;
            }
        }
        if (MHP < 8)
        {
            MHP = MHP + 2;
            cout << "The Burning Ent sapped energy from the ground and healed 2 HP." << endl;
        }
    }
    cout << MN << ": There he is " << Name << ". That's the one who killed our" << endl << "people and destroyed our town." << endl;
    cout << MN << ": You must destroy him. Take these health potions. Best of luck to you." << endl;
    cout << "As you look upon the giant, you can see what looks like waves of" << endl << "shadow melting off of his body. You walk towards him and prepare to fight." << endl;
    HPPot = HPPot + 3;
    cout << endl << endl << endl << endl;
    MonsterAttack = 15;
    Health = Health + 5;
    while (Health > StatHp)
    {
        Health--;
    }
    for (int MHP = 50; MHP > 0; useless1++)
    {
        cout << Name << "                              |                        Shade Lord" << endl;
        cout << "Health: " << Health << "/" << StatHp << "                 |                     "<< MHP << " :Health" << endl;
        cout << "Dodge: " << StatDef << "                      |                      25 :Dodge" << endl;
        cout << "Strength: " << StatStr << "                    |                   15 :Strength" << endl;
        cout << "                               |" << endl << "                               |" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "|Attack|1|  |HP Pots|2|" << "        |        |Attack|X|  |HP Pots|X|" << endl;
        cout << "----------  -----------" << "        |        ----------  -----------" << endl;
        cout << "   0-" << StatStr << "           " << HPPot << "             |           0-15           X" << endl << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            srand(time(NULL));
            Miss = rand()%100 + 1;
            if (Miss > 25)
            {
                srand(time(NULL));
                Attack = rand()%StatStr + 1;
                MHP = MHP - Attack;
                cout << endl << endl;
                cout << "You hit a " << Attack << "." << endl << endl;
            }
            if (Miss < 26)
            {
                cout << "You missed!" << endl;
            }
        }
        if (Choice == 2)
        {
            if (HPPot == 0)
            {
                cout << MN << ": You don't have any more Health Potions!" << endl << endl;
            }
            if (HPPot > 0)
            {
                HPPot--;
                Health = Health + 15;
            }
            while (Health > StatHp)
            {
                Health--;
            }
        }
        srand(time(NULL));
        MMiss = rand()%100 + 1;
        if (MMiss > StatDef)
        {
            srand(time(NULL));
            Attack = rand()%MonsterAttack + 1;
            Health = Health - Attack;
            cout << "The Shade Lord hit a " << Attack << ", leaving you at " << Health << "." << endl << endl;
        }
        if (MMiss < (StatDef + 1))
        {
            cout << "The Shade Lord missed!" << endl;
        }
        if (Health < 1)
        {
            cout << "The last thing you hear is the screams from your town" << endl;
            cout << "as you fade to darkness." << endl;
            return 0;
        }
    }
    */
    cout << "You fall in exhaustion. You watch as the shadows fall off of the giant" << endl << "of a man and flow into your eyes, putting you to sleep." << endl;
    cout << "One day you will awake to greet the town that you saved, but how will darkness affect your mind." << endl;
    cout << "___________.__              _  ___________           .___" << endl;
    cout << "\\__    ___/|  |__   ____  .!=!.\\_   _____/ ____    __| _/" << endl;
    cout << "  |    |   |  |  \\_/ __ \\ \\===/ |    __)_ /    \\  / __ |" << endl;
    cout << "  |    |   |      \\  ___/ |>x<| |        \\   |  \\/ /_/ |" << endl;
    cout << "  |____|   |___|  /\\___  >|>x<|/_______  /___|  /\\____ |" << endl;
    cout << "                \\/     \\/ |>x<|        \\/     \\/      \\/" << endl;
    cout << "                          |>x<|" << endl;
    cout << "                          |>x<|" << endl;
    cout << "                         .-----." << endl;
    cout << "                     /\\__:-----:__/\\" << endl;
    cout << "                   ./ ._. \\.-./ ._. \\." << endl;
    cout << "                 ./ ./  -.  V  .-  \\. \\." << endl;
    cout << "                /__/      \\   /      \\__\\" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "                          |! !|" << endl;
    cout << "__.:---.__/--\\____/-----._|___|_.-----\\____/--\\_.---:.__" << endl;
    return 0;
}
