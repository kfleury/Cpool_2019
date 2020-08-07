#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);
int my_isneg(int n);
int my_print_comb(void);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

TestSuite(printing_std, .init=redirect_all_stdout);

Test(printing_std, alpha) {
    my_print_alpha();
    cr_assert_stdout_eq_str("abcdefghijklmnopqrstuvwxyz");
}

Test(printing_std, revalpha) {
    my_print_revalpha();
    cr_assert_stdout_eq_str("zyxwvutsrqponmlkjihgfedcba");
}

Test(printing_std, digits) {
    my_print_digits();
    cr_assert_stdout_eq_str("0123456789");
}

Test(printing_std, is_neg1) {
    my_isneg(-1);
    cr_assert_stdout_eq_str("N");
}

Test(printing_std, is_neg2) {
    my_isneg(1);
    cr_assert_stdout_eq_str("P");
}

Test(printing_std, is_neg3) {
    my_isneg(0);
    cr_assert_stdout_eq_str("P");
}

Test(printing_std, comb1) {
    my_print_comb();
    cr_assert_stdout_eq_str("012, 013, 014, 015, 016, 017, 018, 019, 023, "
                            "024, 025, 026, 027, 028, 029, 034, 035, 036, "
                            "037, 038, 039, 045, 046, 047, 048, 049, 056, "
                            "057, 058, 059, 067, 068, 069, 078, 079, 089, "
                            "123, 124, 125, 126, 127, 128, 129, 134, 135, "
                            "136, 137, 138, 139, 145, 146, 147, 148, 149, "
                            "156, 157, 158, 159, 167, 168, 169, 178, 179, "
                            "189, 234, 235, 236, 237, 238, 239, 245, 246, "
                            "247, 248, 249, 256, 257, 258, 259, 267, 268, "
                            "269, 278, 279, 289, 345, 346, 347, 348, 349, "
                            "356, 357, 358, 359, 367, 368, 369, 378, 379, "
                            "389, 456, 457, 458, 459, 467, 468, 469, 478, "
                            "479, 489, 567, 568, 569, 578, 579, 589, 678, "
                            "679, 689, 789");
}