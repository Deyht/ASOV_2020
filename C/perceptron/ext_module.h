
float **create_2d_table(int m, int n);
int argmax(float *tab, int size);
void forward(float *input, int in_dim, float *output, int out_dim, float **weights);
void backprop(float *input, int in_dim, float *output, float *targ, int out_dim, float **weights, float learn_rate);
void confmat(float **input, int in_dim, float **targ, int out_dim, int nb_data, float **weights);
void shuffle(float** input, int in_dim, float** targ, int out_dim, int nb_data);
