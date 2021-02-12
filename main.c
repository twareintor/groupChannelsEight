
#include  <stdio.h>

unsigned data[] = {
      6 ,      7    ,      9    ,     10    ,     11    ,     16    ,     20    ,     26    , 
     30 ,     31    ,     32    ,     33    ,     34    ,     36    ,     38    ,     39    ,    
     48 ,     49    ,     50    ,     51    ,     52    ,     53    ,     55    ,     56    ,
     57	,     58 	,     59    ,     60	,     77    ,     79    ,     80    ,     82    , 
     90	,     93    ,     94    ,     95	,     96    ,     99    ,    100	,    102	,    
    108	,    109	,    110	,    112	,    114	,    119	,    120	,    121	,    
    123	,    124	,    125	,    132	,    137	,    138	,    145	,    146	,    
    148	,    150	,    154	,    160	,    161    ,    162	,    165    ,    166	,    
    169	,    171	,    172	,    174	,    179	,    180	,    181   	,    185	,    
    186	,    190	,    194	,    196    ,    197	,    199    ,    200	,    201	,    
    205	,    208	,    210	,    211	,    213	,    215	,    217	,    218	,    
    219	,    221	,    222    ,    225	,    227    ,    228	,    229	,    230	,    
    234	,    235	,    238	,    241	,    243	,    245	,    248	,    251	,  
                    };

int groupChannelsInModule(unsigned const* channels, unsigned const chnCount, unsigned const chnPerModule);

int groupChannelsInModule(unsigned const* channels, unsigned const chnCount, unsigned const chnPerModule)
{
    int i, j, t;
    t = data[0];
    j = 1;
    i = 0;
    printf("\nmodule %02d:\t", j);
    while(i<chnCount)
    {
        if(data[i]>t+chnPerModule)
        {
            printf("\nmodule %02d:\t", ++j);
            t = data[i];
        }
        printf("%03d,    ", data[i]); 
        i++;
    }
    return 0;
}

int main(void)
{
    groupChannelsInModule(data, sizeof(data)/sizeof(unsigned), 12);
    printf("\nGame Over!\n");   
    return 0;
}



