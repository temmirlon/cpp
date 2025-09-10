#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool checkTitlesAndDates(const std::vector<std::string>& eventTitles, const std::vector<int>& eventDates) {
    if (eventTitles.size() != eventDates.size()) {
        // Das muss ein Programmierfehler sein
        std::cerr << "Anzahl der Titel und Anzahl der Termine "
            << "muss gleich sein." << std::endl;
        return false;
    }

    // Plausibilitat: Hat Datum exakt acht Stellen?

    for (int date : eventDates) {
        if (date < 10000000 || date > 99999999) {
            std::cerr << "Falsche Datum: " << date << std::endl;
            return false;
        }
    }

    // Fur die Suche muss das Datum sortiert sein

    for (int i = 1; i < eventDates.size(); i++) {
        if (eventDates.at(i - 1) > eventDates.at(i)) {
            std::cerr << "Termine nicht sortiert" << std::endl;
            return false;
        }
    }
    return true;
}

void showHeader(const std::string& text) {
    for (int i = 0; i < text.size(); i++) {
        std::cout << "#";
    }
    std::cout << std::endl << text << std::endl;
    for (int i = 0; i < text.size(); i++) {
        std::cout << "#";
    }
    std::cout << std::endl;
}

int showSelection(const std::string& question,
    const std::vector<std::string>& answers) {
    std::cout << question << std::endl;
    for (int i = 0; i < answers.size(); i++) {
        std::cout << i + 1 << ": " << answers.at(i) << std::endl;
    }
    std::cout << "Tippen Sie eine Zahl ein: ";
    int selection;
    std::cin >> selection;

    while (selection <= 0 || selection > answers.size()) {
        std::cout << "\n" << "Eingabe inkorrekt. Bitte wiederholen." << "\n";

        /* Der Nutzer hat eine Zahl zwischen 1 und der Anzahl der Elemente eingegeben.
        Als Programmierer erwarten wir aber, dass die Zählung bei 0 beginnt.
        Daher muss die 1 wieder abgezogen werden.*/
        std::cin >> selection;
    }
    return selection - 1;
}

bool findInString(std::string text, std::string query) {

    /*
        Um Gross- und Kleinschreibung beim Suchen zu ignorieren,
        wandeln wir alles in Kleinbuchstaben um.
    */
    std::transform(text.begin(), text.end(), text.begin(), tolower);
    std::transform(query.begin(), query.end(), query.begin(), tolower);

    /*
        Mit .find() kann man innerhalb eines Strings nach
        einem anderen String suchen. Wenn er nicht gefunden
        wird, ist das Ergebnis std::string::npos (npos steht fur "no position")
    */
    return text.find(query) != std::string::npos;
}

std::vector<int> searchByTitle(const std::vector<std::string>& titels) {
    std::cout << "Geben Sie ein Suchwort ein: ";
    std::string query;
    std::cin >> query;
    std::vector<int> selections;

    for (int i = 0; i < titels.size(); i++) {
        const std::string& title = titels.at(i);
        if (findInString(title, query))
        {
            //Der Suchbegriff wurde im i-ten Titel gefunden
            selections.push_back(i);
        }
    }
    return selections;
}

std::vector<int> searchByDate(const std::vector<int>& dates) {
    /*
        Suche alle Termine, die an oder nach dem angegebenen
        Datum stattfinden.
    */
    std::cout << "Bitte Geben Sie ein Datum ein, ab dem "
        << "nach Veranstaltungen gesucht werden soll."
        << std::endl << "Geben Sie das Datum im Format "
        << "YYYYMMDD ein, also z.B. 20210705: ";
    int query;
    std::cin >> query;
    std::vector<int> selections;

    for (int i = 0; i < dates.size(); i++) {
        const int& date = dates.at(i);
        if (date >= query)
        {
            /*
                Dies ist das erste gefundene Datum, was nocht vor dem gesuchten Datum liegt. Daher geben wir alle übrigen
                Termine aus. Dafür starten wir eine neue for-Schleife beim i-ten Element und gehen von
                dort bis zum Ende der Liste.
            */
            
            for (int j = i; j < dates.size(); j++)
            {
                selections.push_back(j);
            }
            //Schleife verlassen, da wir Termine gefunden haben1
            break;
        }
    }
    return selections;
}

int main() {
    const std::vector<std::string> eventTitels = {
        "Rock Concert",
        "Jazz Concert",
        "Hard-Rock Concert",
        "Classical Concert",
        "Jazz Concert"
    };

    // Speicherung des Datums als JahrMonatTag

    const std::vector<int> eventDates = {
        20220417,
        20220822,
        20221011,
        20221027,
        20221203
    };



    if (!checkTitlesAndDates(eventTitels, eventDates))
    {
        //Fehlerhafter Datensatz
        return 1;
    }



    showHeader("Willkommen beim digitalen Buchungssystem");
    const std::vector<std::string> searchTypes = {
        "nach Titel der Veranstaltung",
        "nach Termin der Veranstaltung"
    };

    const int selectedSearch = showSelection("Wie wollen Sie suchen?", searchTypes);

    std::vector<int> eventsFound;

    switch (selectedSearch)
    {
    case 0:
        eventsFound = searchByTitle(eventTitels);
        break;
    case 1:
        eventsFound = searchByDate(eventDates);
        break;
    default:
        std::cerr << "Unerwarteter searchType: " << selectedSearch << std::endl;
        return 1;
    }

    if (eventsFound.size() == 0) {
        showHeader("Leider keine Veranstaltung gefunden.");
    }
    else {
        showHeader("Veranstaltungen gefunden:");

        std::vector<std::string> selectionTexts;

        for (int index : eventsFound) {
            selectionTexts.push_back(eventTitels.at(index) + ", am " + std::to_string(eventDates.at(index)));
        }

        int selected = showSelection(
            "Welche Veranstaltung wollen Sie buchen?",
            selectionTexts);

        showHeader("Sie haben gebucht: " + selectionTexts.at(selected));

    }
    return 0;

}
