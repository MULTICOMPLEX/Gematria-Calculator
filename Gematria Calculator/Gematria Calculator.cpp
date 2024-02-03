#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <regex>

std::string Gematria;

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
    std::cout << str << " \n\n\n";

    std::cout << "Jewish  Gematria of " << Gematria << " equals: " << ConvertLetters_jewish(str) << " \n";
    std::cout << "English Gematria of " << Gematria << " equals: " << ConvertLetters_english(str) << " \n";
    std::cout << "Simple  Gematria of " << Gematria << " equals: " << ConvertLetters_simple(str) << " \n\n";

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

