//#include <ctype.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//
//int
//main (int argc, char **argv)
//{
//  int aflag = 0;
//  int bflag = 0;
//  char *cvalue = NULL;
//  int index;
//  int c;
//
//  opterr = 0;
//
//  while ((c = getopt (argc, argv, "abc:")) != -1)
//    switch (c)
//      {
//      case 'a':
//        aflag = 1;
//        break;
//      case 'b':
//        bflag = 1;
//        break;
//      case 'c':
//        cvalue = optarg;
//        break;
//      case '?':
//        if (optopt == 'c')
//          fprintf (stderr, "Option -%c requires an argument.\n", optopt);
//        else if (isprint (optopt))
//          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
//        else
//          fprintf (stderr,
//                   "Unknown option character `\\x%x'.\n",
//                   optopt);
//        return 1;
//      default:
//        abort ();
//      }
//
//  printf ("aflag = %d, bflag = %d, cvalue = %s\n",
//          aflag, bflag, cvalue);
//
//  for (index = optind; index < argc; index++)
//    printf ("Non-option argument %s\n", argv[index]);
//  return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

///* Flag set by ‘--verbose’. */
//static int verbose_flag;
//
//int
//main (int argc, char **argv)
//{
//  int c;
//
//  while (1)
//    {
//      static struct option long_options[] =
//        {
//          /* These options set a flag. */
//          {"verbose", no_argument,       &verbose_flag, 1},
//          {"brief",   no_argument,       &verbose_flag, 0},
//          /* These options don’t set a flag.
//             We distinguish them by their indices. */
//          {"add",     no_argument,       0, 'a'},
//          {"append",  no_argument,       0, 'b'},
//          {"delete",  required_argument, 0, 'd'},
//          {"create",  required_argument, 0, 'c'},
//          {"file",    required_argument, 0, 'f'},
//          {0, 0, 0, 0}
//        };
//      /* getopt_long stores the option index here. */
//      int option_index = 0;
//
//      c = getopt_long (argc, argv, "abc:d:f:",
//                       long_options, &option_index);
//
//      /* Detect the end of the options. */
//      if (c == -1)
//        break;
//
//      switch (c)
//        {
//        case 0:
//          /* If this option set a flag, do nothing else now. */
//          if (long_options[option_index].flag != 0)
//            break;
//          printf ("option %s", long_options[option_index].name);
//          if (optarg)
//            printf (" with arg %s", optarg);
//          printf ("\n");
//          break;
//
//        case 'a':
//          puts ("option -a\n");
//          break;
//
//        case 'b':
//          puts ("option -b\n");
//          break;
//
//        case 'c':
//          printf ("option -c with value `%s'\n", optarg);
//          break;
//
//        case 'd':
//          printf ("option -d with value `%s'\n", optarg);
//          break;
//
//        case 'f':
//          printf ("option -f with value `%s'\n", optarg);
//          break;
//
//        case '?':
//          /* getopt_long already printed an error message. */
//          break;
//
//        default:
//          abort ();
//        }
//    }
//
//  /* Instead of reporting ‘--verbose’
//     and ‘--brief’ as they are encountered,
//     we report the final status resulting from them. */
//  if (verbose_flag)
//    puts ("verbose flag is set");
//
//  /* Print any remaining command line arguments (not options). */
//  if (optind < argc)
//    {
//      printf ("non-option ARGV-elements: ");
//      while (optind < argc)
//        printf ("%s ", argv[optind++]);
//      putchar ('\n');
//    }
//
//  exit (0);
//}

int main(int argc, char *argv[]){
         int i;
              for(i = 0; i < argc; i++)
                           printf("%s\n", *(argv+i));
                   return 0;
}
