#ifndef UNSORTEDRESERVATIONLIST_HPP
#define UNSORTEDRESERVATIONLIST_HPP

#include "Reservation.hpp"

#include <iostream>

#define MAX_POS 100

class UnsortedReservationList
{
    private:
        int length = 0;
        int currentPos = 0;
        Reservation reservationArray[MAX_POS];
    
    public:
        void MakeEmpty();
        void AddReservation(Reservation);
        Reservation FindReservation(Reservation);
        void DeleteReservation(string);
        void ResetList();
        Reservation GetNextReservation();
        int GetLength();
        void PrintList();
        ~UnsortedReservationList();

};

#endif