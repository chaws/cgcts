# Contains all patches needed to improve results compilation

patches = {
        'FaceMag': {
            'lib/input.c': [('static char circ_buffer[maxLen];', 'static char circ_buffer[512];')]
        },
        'Mixology': {
            'lib/cgc_libcompound.h': [('static chem_formula_t chem_formulas[N_FORMULAS] = {', 'static chem_formula_t chem_formulas[3000] = {')],
            'lib/cgc_libmixology.h': [('char compound_name[MAX_NEW_CMPND_SZ];', 'char compound_name[128];'),
                                      ('static char last_compound[MAX_NEW_CMPND_SZ];', 'static char last_compound[128];'),
                                      ('static command_t commands[NUM_CMDS] = {', 'static command_t commands[4] = {')]
        },
        'university_enrollment': {
            'src/main.c': [('static char line[LINE_SIZE];', 'static char line[1024];')]
        },
}
