/**
 * Project Untitled
 */


#ifndef _PROSES SEWA_H
#define _PROSES SEWA_H

#include "Perbaikan.h"


class Proses Sewa: public Perbaikan {
public: 
    void Spesifikasi Barang;
    void Harga Sewa;
    void lama sewa;
    void tanggal mulai sewa;
    void pembayaran;
    
void getjenis();
    
void getharga();
    
void getlama();
    
void gettanggalmulaiu();
    
void pembayaran();
};

#endif //_PROSES SEWA_H