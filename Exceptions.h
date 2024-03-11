#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <exception>
#include <fstream>
#include <string>

/*
 * @brief Przestrze� nazw FileExceptions zawiera wyj�tki zwi�zane z plikami.
 *
 * Przestrze� nazw zawiera klasy reprezentuj�ce wyj�tki zwi�zane z operacjami na plikach.
 * Klasa FileInvalidArgument dziedziczy po std::invalid_argument i reprezentuje b��d zwi�zany z nieprawid�owymi argumentami.
 * Klasa FileRuntimeError dziedziczy po std::runtime_error i reprezentuje b��d zwi�zany z czasem wykonania.
 */
namespace FileExceptions {

	class FileInvalidArgument : public std::invalid_argument {
	public:
		FileInvalidArgument(std::string msg) : std::invalid_argument(msg.c_str()) {}
	};

	class FileRuntimeError : public std::runtime_error {
	public:
		FileRuntimeError(std::string msg) : std::runtime_error(msg.c_str()) {}
	};
}

/*
 * @brief Przestrze� nazw ArrayExceptions zawiera wyj�tek zwi�zany z tablicami.
 *
 * Przestrze� nazw zawiera klas� reprezentuj�c� wyj�tek zwi�zanego z alokacj� pami�ci dla tablicy.
 * Klasa BadAllocError dziedziczy po std::bad_alloc i reprezentuje b��d zwi�zany z nieudan� alokacj� pami�ci.
 */
namespace ArrayExceptions {
	class BadAllocError : public std::bad_alloc {
	public:
		BadAllocError() : std::bad_alloc() {};
	};
}

/*
 * @brief Przestrze� nazw BitmapExceptions zawiera wyj�tki zwi�zane z bitmapami.
 *
 * Przestrze� nazw zawiera klasy reprezentuj�ce wyj�tki zwi�zane z operacjami na bitmapach.
 * Klasa BitmapRuntimeError dziedziczy po std::runtime_error i reprezentuje b��d zwi�zany z czasem wykonania.
 * Klasa BitmapInvalidArgument dziedziczy po std::invalid_argument i reprezentuje b��d zwi�zany z nieprawid�owymi argumentami.
 */
namespace BitmapExceptions {
	class BitmapRuntimeError : public std::runtime_error {
	public:
		BitmapRuntimeError(std::string msg) : std::runtime_error(msg.c_str()) {}
	};

	class BitmapInvalidArgument : public std::invalid_argument {
	public:
		BitmapInvalidArgument(std::string msg) : std::invalid_argument(msg.c_str()) {}
	};
}

#endif