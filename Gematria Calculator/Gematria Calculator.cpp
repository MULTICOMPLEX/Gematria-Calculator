#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <regex>

std::string Gematria;
std::string Gematria2 = "mark king accused the daughter of i god of what he has did 	2331 	2664 	444 	840\
england waves goodbye 	2331 	1200 	200 	796\
never compromise convictions 	2331 	1998 	333 	591\
the new world order 	2331 	1242 	207 	567\
yeshuwah ahavah 	2331 	906 	151 	436\
blue eisenhower november 	2331 	1530 	255 	397\
ryan reynolds is a woman 	2331 	1590 	265 	330\
x is coming with cloud computing 	2331 	2076 	346 	317\
i dont believe in satans laws 	2331 	1644 	274 	291\
conquerin love not honorable k jc 	2331 	1998 	333 	250\
john lithgow crying 	2331 	1302 	217 	250\
dejav i have been here before 	2331 	1200 	200 	244\
wmtshwusakb 	2331 	960 	160 	213\
i cry for sure i love her so much q 	2331 	2082 	347 	182\
floating vertebrae in lower back 	2331 	1758 	293 	132\
how about i put her to the test 	2331 	2004 	334 	129\
i hate when scum thinks its better than me 	2331 	2454 	409 	122\
we nashed an screamed and pleaded and cried and tried and tried and tried 	2331 	3066 	511 	121\
jan crouch goddamned wigs of sin 	2331 	1686 	281 	117\
alex jones is cia decoded code cracked checkmate v 	2331 	2094 	349 	112\
contains the soul of the virgin mary 	2331 	2310 	385 	111\
u sure that was my blood 	2331 	1572 	262 	110\
join two beasts into one 	2331 	1584 	264 	104\
the lord jesus christ is my shepherd 	2331 	2292 	382 	99\
gematria is not perfect but intrinsic to the truth of god 	2331 	3504 	584 	98\
the white house is an out house 	2331 	1998 	333 	94\
lightning swift judgment 	2331 	1626 	271 	93\
austin secret of secrets seeded with in 	2331 	2334 	389 	91\
the future needs to come out of their retirement homes 	2331 	3396 	566 	90\
bowel movement issue 	2331 	1422 	237 	88\
the goverment is planning to use austin 	2331 	2586 	431 	88\
agitaverat edidit dolendae servatas 	2331 	1920 	320 	87\
according to my intellect that that is madison i am the god hor em akhet 	2331 	3804 	634 	86\
edideris currenda lecturos addende novarum 	2331 	2466 	411 	85\
iptv by mmxv 	2331 	996 	166 	83\
dictator of ireland dictator of france dictator of engla\nd dictator of scotland 	2331 	4194 	699 	80\
reality written in language codes 	2331 	2016 	336 	80\
human body image of satan darkness on earth before light soul 	2331 	3360 	560 	79\
put down your gun 	2331 	1404 	234 	78\
the lord of evil is michael youll find out 	2331 	2424 	404 	78\
english means christian christian means brainwashed 	2331 	2904 	484 	75\
the wonderful butterfly 	2331 	1680 	280 	75\
corrupted community organization 	2331 	2412 	402 	73\
that frequency is loud thank you fren 	2331 	2406 	401 	73\
good friday you can see forever 	2331 	1806 	301 	72\
sweden has evidence usa did it 	2331 	1512 	252 	72\
we cannot be together never 	2331 	1584 	264 	72\
fields of meadow flowers 	2331 	1410 	235 	71\
its not about me its not about me its not about me 	2331 	3132 	522 	71\
leonardo davinci magic square the last supper 	2331 	2640 	440 	70";

std::string AskGematria() {
  std::cout << "What do you want the gematria of?\n\n";

  std::getline(std::cin, Gematria);
  std::cout << "\n";
  return Gematria;

}

std::string to_lower_case(std::string& str) {
  std::regex non_letters_regex("[^a-zA-Z-]");
  return std::regex_replace(str, non_letters_regex, "");
}

int ConvertLetters_jewish(const std::string& Characters) {
  //    Converts letters to numerical value.
  std::unordered_map <char, int > Gematria_Values = {
          {'a', 1},
          {'b', 2},
          {'c', 3},
          {'d', 4},
          {'e', 5},
          {'f', 6},
          {'g', 7},
          {'h', 8},
          {'i', 9},
          {'j', 600},
          {'k', 10},
          {'l', 20},
          {'m', 30},
          {'n', 40},
          {'o', 50},
          {'p', 60},
          {'q', 70},
          {'r', 80},
          {'s', 90},
          {'t', 100},
          {'u', 200},
          {'v', 700},
          {'w', 900},
          {'x', 300},
          {'y', 400},
          {'z', 500}
  };

  int sum = 0;
  auto str = Characters;
  str = to_lower_case(str);
  for (auto& ch : str)
    sum += Gematria_Values[ch];
  return sum;
}

int ConvertLetters_english(const std::string& Letters) {
  //    Converts letters to numerical value.
  std::unordered_map <char, int > Gematria_Values = {
          {'a', 6},
          {'b', 12},
          {'c', 18},
          {'d', 24},
          {'e', 30},
          {'f', 36},
          {'g', 42},
          {'h', 48},
          {'i', 54},
          {'j', 60},
          {'k', 66},
          {'l', 72},
          {'m', 78},
          {'n', 84},
          {'o', 90},
          {'p', 96},
          {'q', 102},
          {'r', 108},
          {'s', 114},
          {'t', 120},
          {'u', 126},
          {'v', 132},
          {'w', 138},
          {'x', 144},
          {'y', 150},
          {'z', 156}
  };

  int sum = 0;
  auto str = Letters;
  str = to_lower_case(str);
  for (auto& ch : str)
    sum += Gematria_Values[ch];
  return sum;
}

int ConvertLetters_simple(const std::string& Letters) {
  //    Converts letters to numerical value.
  std::unordered_map <char, int > Gematria_Values = {
          {'a', 1},
          {'b', 2},
          {'c', 3},
          {'d', 4},
          {'e', 5},
          {'f', 6},
          {'g', 7},
          {'h', 8},
          {'i', 9},
          {'j', 10},
          {'k', 11},
          {'l', 12},
          {'m', 13},
          {'n', 14},
          {'o', 15},
          {'p', 16},
          {'q', 17},
          {'r', 18},
          {'s', 19},
          {'t', 20},
          {'u', 21},
          {'v', 22},
          {'w', 23},
          {'x', 24},
          {'y', 25},
          {'z', 26}
  };

  int sum = 0;
  auto str = Letters;
  str = to_lower_case(str);
  for (auto& ch : str)
    sum += Gematria_Values[ch];
  return sum;
}

void PrintGematria() {
  std::string Gematria = AskGematria();
  if (!Gematria.empty()) {

    auto str = to_lower_case(Gematria);

    std::cout << "Jewish  Gematria" << " equals: " << ConvertLetters_jewish(str) << " \n";
    std::cout << "English Gematria" << " equals: " << ConvertLetters_english(str) << " \n";
    std::cout << "Simple  Gematria" << " equals: " << ConvertLetters_simple(str) << " \n\n";

    std::cout << "Enter nothing to end program.\n";
    PrintGematria();
  }
  else {
    std::cout << "Hope you enjoyed\n";
  }

}

int main() {
  //    Gives the value to the user.
  PrintGematria();
  return 0;
}

