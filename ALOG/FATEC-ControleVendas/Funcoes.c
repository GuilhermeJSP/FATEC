
//função de calculo de comissao

float CalcComissao(float Venda, float Meta)
{
    float Comissao;

    if (Venda >= Meta)
        Comissao = Venda * 0.05;
    else
        Comissao = Venda * 0.02;

    return (Comissao);
}
