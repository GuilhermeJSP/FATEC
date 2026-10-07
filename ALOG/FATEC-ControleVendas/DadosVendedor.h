#ifndef DADOSVENDEDOR_H
//If Not Defined.
//Pergunta: "A constante DADOSVENDEDOR_H ainda não foi definida?"
#define DADOSVENDEDOR_H
//Se não foi definida, define essa constante

// Tudo que estiver aqui só será incluído uma vez

typedef struct {
    char Nome[100];
    int Setor;
    float ValVenda;
    float ValMeta;
} DadosVendedor;

#endif
//Fecha o #ifndef
