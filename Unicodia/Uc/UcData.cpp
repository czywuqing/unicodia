#include "UcData.h"

using namespace std::string_view_literals;

const uc::Version uc::versionInfo[static_cast<int>(uc::EcVersion::NN)] {
    //{ "1.0"sv,  1991 },
    //{ "1.0.1"sv,1992 },
    { "1.1"sv,  1993 },
    { "2.0"sv,  1996 },
    { "2.1"sv,  1998 },
    { "3.0"sv,  1999 },
    { "3.1"sv,  2001 },
    { "3.2"sv,  2002 },
    { "4.0"sv,  2003 },
    { "4.1"sv,  2005 },
    { "5.0"sv,  2006 },
    { "5.1"sv,  2008 },
    { "5.2"sv,  2009 },
    { "6.0"sv,  2010 },
    { "6.1"sv,  2012 },
    { "6.2"sv,  2012 },
    { "6.3"sv,  2013 },
    { "7.0"sv,  2014 },
    { "8.0"sv,  2015 },
    { "9.0"sv,  2016 },
    { "10.0"sv, 2017 },
    { "11.0"sv, 2018 },
    { "12.0"sv, 2019 },
    { "12.1"sv, 2019 },
    { "13.0"sv, 2020 },
    //{ "14.0"sv, 2021 },       //check for equal number
};


const uc::Category uc::categoryInfo[static_cast<int>(uc::EcCategory::NN)] {
    { UpCategory::CONTROL,      u8"Управляющий"sv },
    { UpCategory::FORMAT,       u8"Форматирующий"sv },
    // PRIVATE_USE,     -- unused as Unicodia has nothing to tell
    // SURROGATE,       -- unused as Unicodia has nothing to tell
    { UpCategory::LETTER,       u8"Буква/строчная"sv },
    { UpCategory::LETTER,       u8"Буква/модифицирующая"sv },
    { UpCategory::LETTER,       u8"Буква/другая"sv },
    { UpCategory::LETTER,       u8"Буква/смешанный регистр"sv },
    { UpCategory::LETTER,       u8"Буква/заглавная"sv },
    { UpCategory::MARK,         u8"Метка/протяжённая"sv },
    { UpCategory::MARK,         u8"Метка/охватывающая"sv },
    { UpCategory::MARK,         u8"Метка/непротяжённая"sv },
    { UpCategory::NUMBER,       u8"Числовой/десятичный"sv },
    { UpCategory::NUMBER,       u8"Числовой/буквенный"sv },
    { UpCategory::NUMBER,       u8"Числовой/другой"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/соединитель"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/черта"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/закрывающая скобка"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/конечный"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/начальный"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/другой"sv },
    { UpCategory::PUNCTUATION,  u8"Знак препинания/открывающая скобка"sv },
    { UpCategory::SYMBOL,       u8"Символ/валютный"sv },
    { UpCategory::SYMBOL,       u8"Символ/модифицирующий"sv },
    { UpCategory::SYMBOL,       u8"Символ/математической"sv },
    { UpCategory::SYMBOL,       u8"Символ/другой"sv },
    { UpCategory::SEPARATOR,    u8"Разделитель/строк"sv },
    { UpCategory::SEPARATOR,    u8"Разделитель/абзацев"sv },
    { UpCategory::SEPARATOR,    u8"Разделитель/пробел"sv },
    //{ u8"Ошибка"sv },     //check for equal number
};


const uc::NumType uc::numTypeInfo[static_cast<int>(uc::EcNumType::NN)] {
    { ""sv },
    { u8"Цифра"sv },
    { u8"Особая цифра"sv },
    { u8"Число"sv },
};


const uc::BidiClass uc::bidiClassInfo[static_cast<int>(EcBidiClass::NN)] {
    { u8"Тэг направления"sv },
    { u8"Арабская буква"sv },
    { u8"Арабская цифра"sv },

    { u8"Разделитель абзацев"sv },
    { u8"Управляющие, соединители и тэги"sv },
    { u8"Знак препинания"sv },

    { u8"Европейская цифра"sv },
    { u8"Европейский разделитель"sv },
    { u8"Европейская единица измерения"sv },

    { u8"Слева направо"sv },
    { u8"Непротяжённая метка"sv },
    { u8"Прочий нейтральный"sv },

    { u8"Отзеркаливающийся"sv },
    { u8"Справа налево"sv },
    { u8"Разделитель участков"sv },
    { u8"Пробел"sv },
    //{ u8"Ошибка"sv },  check for equal number
};
