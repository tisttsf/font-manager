/* Do not edit directly. See build-aux directory */
#ifndef __FONT_MANAGER_VENDOR_H__
#define __FONT_MANAGER_VENDOR_H__

#include <glib.h>

G_BEGIN_DECLS

#define FONT_MANAGER_MAX_VENDOR_ID_LENGTH 5
#define FONT_MANAGER_MAX_VENDOR_LENGTH 100

static const struct
{
    const gchar vendor[FONT_MANAGER_MAX_VENDOR_LENGTH];
    const gchar vendor_id[FONT_MANAGER_MAX_VENDOR_LENGTH];
}
/* Order is significant. */
FontManagerNoticeData [] =
{
    /* Notice data sourced from fcfreetype.c - http://www.freetype.org/ */
    {"Adobe", "adobe"},
    {"Adobe", "Adobe"},
    {"Bigelow & Holmes", "b&h"},
    {"Bigelow & Holmes", "Bigelow & Holmes"},
    {"Bitstream", "Bitstream"},
    {"Font21", "hwan"},
    {"Font21", "Hwan"},
    {"Gnat", "culmus"},
    {"HanYang System", "hanyang"},
    {"HanYang System", "HanYang Information & Communication"},
    {"IBM", "IBM"},
    {"ITC", "itc"},
    {"ITC", "ITC"},
    {"ITC", "International Typeface Corporation"},
    {"Larabiefonts", "Larabie"},
    {"Linotype", "linotype"},
    {"Linotype", "Linotype GmbH"},
    {"Linotype", "LINOTYPE-HELL"},
    {"Microsoft", "microsoft"},
    {"Microsoft", "Microsoft Corporation"},
    {"Monotype", "Monotype Imaging"},
    {"Monotype", "Monotype Corporation"},
    {"Monotype", "Monotype Typography"},
    {"Omega", "omega"},
    {"Omega", "Omega"},
    {"Tiro Typeworks", "Tiro Typeworks"},
    {"URW", "URW"},
    {"XFree86", "XFree86"},
    {"Xorg", "xorg"}
};

static const struct
{
    const gchar vendor_id[FONT_MANAGER_MAX_VENDOR_ID_LENGTH];
    const gchar vendor[FONT_MANAGER_MAX_VENDOR_LENGTH];
}
FontManagerVendorData[] =
{

    /* Various Sources */
    {"ACG", "Monotype Imaging"},
    {"B?", "Bigelow & Holmes"},
    {"FJ", "Fujitsu"},
    {"RICO", "Ricoh"},


    /* Courtesy of Microsoft Typography - https://docs.microsoft.com/en-us/typography/vendors/ */
    {"!ETF", "!Exclamachine Type Foundry"},
    {"$pro", "CheapProFonts"},
    {"100", "AUTHENTIC"},
    {"0264", "Patricia Lillie"},
    {"1ASC", "Ascender Corporation"},
    {"1BOU", "Boutros International"},
    {"1KTF", "Kief Type Foundry"},
    {"2DLT", "2D Typo"},
    {"2REB", "2Rebels"},
    {"39BC", "Finley's Barcode Fonts"},
    {"3ip", "Three Islands Press"},
    {"4FEB", "4th february"},
    {"5PTS", "Five Points Technology"},
    {"72PT", "72 Puntos"},
    {"918", "RavenType"},
    {"A&S", "Art&Sign Studio"},
    {"A2", "A2-Type"},
    {"aaff", "AstroAcademia Font Foundry"},
    {"AA", "Alireza Alipour"},
    {"AAT", "AhmetAltunType"},
    {"ABBO", "Arabic Dictionary Lab"},
    {"ABC", "Altek Instruments"},
    {"ABCD", "Dinamo Typefoundry"},
    {"ABOU", "Aboutype, Inc."},
    {"ABYM", "ABYME"},
    {"ACUT", "Acute Type"},
    {"ACW", "Andrew Christopher West (BabelStone)"},
    {"Adam", "Adam Jagosz"},
    {"ADBE", "Adobe"},
    {"ADBO", "Adobe"},
    {"ADG", "Apply Design Group"},
    {"AES", "AE Type"},
    {"AEF", "Altered Ego Fonts"},
    {"AGFA", "Monotype Imaging (replaced by MONO)"},
    {"AID", "Artistic Imposter Design"},
    {"AJL", "Alex John Lucas"},
    {"AJPT", "Alan Jay Prescott Typography"},
    {"AKOF", "AKOFAType"},
    {"ALFA", "Alphabets"},
    {"ALPH", "Alphameric Broadcast Solutions Limited"},
    {"ALPN", "Alpona Portal"},
    {"AL", "Alessio Laiso Type"},
    {"ALIF", "Alif Type"},
    {"ALS", "Art. Lebedev Studio"},
    {"alte", "Altemus"},
    {"ALTS", "Altsys / Made with Fontographer"},
    {"amcs", "Amit soni"},
    {"AMUT", "Kwesi Amuti"},
    {"ANDO", "Osam Ando"},
    {"ANRT", "Atelier National de Recherche Typographique"},
    {"anty", "Anatoletype"},
    {"AOP", "an Art Of Pengwyn"},
    {"APLY", "Apply Interactive"},
    {"APOS", "Apostrophic Laboratories"},
    {"APPL", "Apple"},
    {"ARBX", "Arabetics"},
    {"ARCH", "Architext"},
    {"ARIN", "Aring Typeface AB"},
    {"ARMA", "Arman Khorramak"},
    {"ARPH", "Arphic Technology Co."},
    {"ARRW", "Arrow Type"},
    {"ARS", "EN ARS Ltd."},
    {"ART", "Alex Rosario Type"},
    {"ARTE", "Artegra"},
    {"ArTy", "Archive Type"},
    {"AS", "Alex Slobzheninov"},
    {"ASL", "Abneil Software Ltd fonts"},
    {"ASSA", "astype"},
    {"ASYM", "Applied Symbols"},
    {"ATEC", "Page Technology Marketing, Inc."},
    {"ATF", "American Type Founders Collection"},
    {"ATF1", "Australian Type Foundry"},
    {"ATFS", "Andrew Tyler's fonts"},
    {"AUH", "Atelier Ursula Heilig SGD"},
    {"AURE", "Aure Font Design"},
    {"AUTO", "Autodidakt"},
    {"AVFF", "Agustín Varela Font Factory"},
    {"AVP", "Aviation Partners"},
    {"AZLS", "Azalea Software, Inc."},
    {"B&H", "Bigelow & Holmes"},
    {"BARS", "CIA (BAR CODES) UK"},
    {"BASE", "Baseline Fonts"},
    {"BAT", "BUREAU DES AFFAIRES TYPOGRAPHIQUES"},
    {"BBTY", "Bruno Bernard Typographie"},
    {"BCP", "Expert Labels Ltd."},
    {"BEN", "Ben Hodosi"},
    {"BERT", "Berthold"},
    {"BF", "BrassFonts"},
    {"bftr", "Bleed Design Studio"},
    {"BGDN", "Ryan Bugden"},
    {"bgtl", "bigital"},
    {"BIRD", "Magpie Paper Works"},
    {"BITM", "Bitmap Software"},
    {"BITS", "Bitstream"},
    {"bizf", "Bizfonts.com"},
    {"BL", "Binnenland"},
    {"BLAB", "BaseLab"},
    {"BLAH", "Mister Bla's Fontworx"},
    {"BLCK", "Black Foundry"},
    {"BLI", "Blissym Language Institute"},
    {"BLV", "Bladvulling"},
    {"BLZT", "Blaze Type"},
    {"BMD", "Brittney Murphy Design"},
    {"BNFF", "BengalFonts"},
    {"BOLD", "Bold Monday"},
    {"BORW", "em2 Solutions"},
    {"BOYB", "BoyBeaver Fonts"},
    {"BRBT", "Bureau Brut"},
    {"BRDV", "BoardVantage, Inc."},
    {"BREM", "Mark Bremmer"},
    {"BROS", "Michael Brosnan"},
    {"BRTC", "ITSCO - Bar Code Fonts"},
    {"BS", "Barcodesoft"},
    {"BST", "Bolorsoft LLC"},
    {"BSTD", "Bastard Type Inc"},
    {"BSYV", "Ben Syverson"},
    {"BUBU", "BUBULogix"},
    {"BWFW", "B/W Fontworks"},
    {"BwT", "Branding with Type"},
    {"C&B", "Coppers & Brasses"},
    {"C&C", "Carter & Cone"},
    {"C&G", "C&G Inc."},
    {"C21", "Club 21"},
    {"CAK", "pluginfonts.com"},
    {"CAM", "Camelot Typefaces"},
    {"camp", "Campotype"},
    {"CANO", "Canon"},
    {"CASL", "H.W. Caslon & Company Ltd."},
    {"CATG", "CAT-Fonts Germany"},
    {"CAVE", "Fonderia Cavedoni"},
    {"CB", "Christian Büning"},
    {"CBDO", "Borges Lettering & Design"},
    {"CDAC", "Centre for Development of Advanced Computing"},
    {"cdd", "Crazy Diamond Design"},
    {"CDFP", "VT2000 Technical Services"},
    {"CELB", "Celebrity Fontz"},
    {"CF", "Colophon Foundry"},
    {"CFA", "Computer Fonts Australia"},
    {"CFAB", "Creative Fabrica"},
    {"CFF", "Characters Font Foundry"},
    {"CJCJ", "Creative Juncture"},
    {"CJT", "CJ Type"},
    {"CKTP", "CakeType"},
    {"CLM", "Culmus Project"},
    {"CMJK", "Slanted Hall"},
    {"COFO", "Contrast Foundry"},
    {"COMI", "Comicraft"},
    {"COMM", "Commercial Type"},
    {"CONR", "Connare.com"},
    {"COOL", "Cool Fonts"},
    {"CORD", "corduroy"},
    {"CR8", "CR8 Software Solutions"},
    {"CRRT", "Carrot Type"},
    {"CT", "CastleType"},
    {"CTDL", "China Type Designs Ltd."},
    {"CTL", "Chaitanya Type Library"},
    {"cwwf", "Computers World Wide/AC Capital Funding"},
    {"CYPE", "Club Type"},
    {"CYRE", "Cyreal"},
    {"CZOO", "Creative ZOO"},
    {"D&ST", "Dots&Stripes Type"},
    {"DADA", "Dada Studio"},
    {"DAMA", "Dalton Maag Limited"},
    {"DARK", "Out Of The Dark"},
    {"DB", "Daniel Bruce"},
    {"DBFF", "DesignBase"},
    {"DD", "Devon DeLapp"},
    {"DDT", "DosDiez Type"},
    {"Deco", "DecoType (replaced by DT)"},
    {"DELV", "Delve Fonts"},
    {"dezc", "Dezcom"},
    {"DFS", "Datascan Font Service Ltd"},
    {"DG", "Daniel Grumer"},
    {"DGL", "Digital Graphic Labs foundry"},
    {"DHRM", "Dharma Type"},
    {"DIFO", "Digital Foundry"},
    {"djr", "DJR"},
    {"DNF", "Deranged Neko Foundry"},
    {"DOM", "Dukom Design"},
    {"DR", "Dmitry Rastvortsev"},
    {"DS", "Dainippon Screen Mfg. Co., Inc."},
    {"DSBV", "Datascan bv"},
    {"DSCI", "Design Science Inc."},
    {"DSGN", "DizajnDesign"},
    {"DSKY", "Jacek Dziubinski"},
    {"DSSR", "Dresser Johnson"},
    {"DSST", "Dubina Nikolay"},
    {"DST", "DSType"},
    {"DSTE", "Dieste"},
    {"DT", "DecoType"},
    {"DTC", "Digital Typeface Corp."},
    {"DTF", "Dunwich Type Founders"},
    {"DTIL", "Detail Type Foundry"},
    {"DTL", "Dutch Type Library"},
    {"DTPS", "DTP-Software"},
    {"dtpT", "dtpTypes Limited"},
    {"DUXB", "Duxbury Systems, Inc."},
    {"DXTF", "DXTypefoundry"},
    {"DYNA", "DynaComware"},
    {"ECAL", "ECAL Typefaces"},
    {"EDBI", "edilbiStudio"},
    {"EDGE", "Rivers Edge Corp."},
    {"EF", "Elsner+Flake"},
    {"EFF", "Electronic Font Foundry"},
    {"EFI", "Elfring Fonts Inc."},
    {"EFNT", "E Fonts L.L.C."},
    {"EFWS", "eFilm World"},
    {"EKIO", "Ekioh"},
    {"ELSE", "Elseware"},
    {"EMGR", "Emigre"},
    {"EPSN", "Epson"},
    {"ESIG", "E-Signature"},
    {"ETIO", "Ethiopian Font Foundry"},
    {"EVER", "Evertype"},
    {"FA", "FontArte Type Foundry"},
    {"FAFO", "FamiraFonts"},
    {"FAPA", "FamiljenPangea"},
    {"FAT", "Fatype"},
    {"FBI", "The Font Bureau, Inc."},
    {"FCAB", "The Font Cabinet"},
    {"FCAN", "fontage canada"},
    {"FCTP", "Facetype"},
    {"FDI", "FDI fonts.info"},
    {"FEED", "Studio Feed Inc."},
    {"FeoN", "Feòrag NìcBhrìde"},
    {"FGOD", "FontGod"},
    {"FILI", "Louise Fili Ltd"},
    {"FIRA", "Firasoft Fonts"},
    {"FJR", "F.J.R. German Typeface"},
    {"FJTY", "Frank Jonen - Illustration & Typography"},
    {"FMFO", "Fontmill Foundry"},
    {"FMST", "Formist"},
    {"FNSA", "Fonseca Fonts"},
    {"FNTF", "Fontfoundry"},
    {"FoFa", "FontFabrik"},
    {"FoHa", "The Fonthausen Font Foundry"},
    {"FONT", "Font Source"},
    {"FORM", "Formation Type Foundry"},
    {"FOSH", "Forgotten Shapes"},
    {"FOST", "Foster Type"},
    {"FOUN", "The Foundry"},
    {"FP", "The Fontpad"},
    {"FRJN", "Frere-Jones Type"},
    {"FRML", "formlos"},
    {"FRNK", "Frank Fonts"},
    {"FRNZ", "Franziska Weitgruber"},
    {"FRTH", "Forthcome"},
    {"FS", "Formula Solutions"},
    {"FSD", "Fabrizio Schiavi Design"},
    {"FSE", "Font Source Europe"},
    {"FSI", "FontShop International"},
    {"FSL", "FontSurfer Ltd"},
    {"FSLF", "Fontself"},
    {"fsmi", "Fontsmith"},
    {"FSTR", "Fontstore Pte Ltd"},
    {"FTF", "Fontef"},
    {"FTFT", "FontFont"},
    {"FTGD", "Font Garden"},
    {"FTH", "For the Hearts"},
    {"FTN", "Fountain"},
    {"FTPT", "Fontpartners"},
    {"FWD", "Fontwright Design"},
    {"FWKS", "Fontworks"},
    {"FWRE", "Fontware Limited"},
    {"FXTL", "Foxtail Collectif"},
    {"FY", "Fontyou"},
    {"GAF", "Glifo Art Fonts Inc."},
    {"GAKU", "Gakumon"},
    {"GALA", "Galápagos Design Group, Inc."},
    {"GALO", "Gerald Gallo"},
    {"GARI", "Gary Ritchie"},
    {"GATF", "Greater Albion Typefounders"},
    {"GD", "GD Fonts"},
    {"Geez", "Beteseb Graphic Design"},
    {"GF", "GarageFonts"},
    {"GIA", "Georgian Internet Avenue"},
    {"GLCF", "GLC foundry"},
    {"GLYF", "Glyph Systems"},
    {"GNRL", "General Type Studio"},
    {"GNU", "Free Software Foundation, Inc."},
    {"GOAT", "Dingbat Dungeon"},
    {"GOGO", "Fonts-A-Go-Go"},
    {"GOHE", "GoHebrew, division of GoME2.com Inc."},
    {"GOOG", "Google"},
    {"GPI", "Gamma Productions, Inc."},
    {"GRAF", "Grafikarna d.o.o."},
    {"GRCR", "Graphicore"},
    {"GREY", "Greyletter"},
    {"GRIL", "Grilled cheese"},
    {"GRIM", "Legacy publishing"},
    {"grro", "grafikk RØren"},
    {"GS", "Grayscale Limited"},
    {"GT", "Graphity!"},
    {"GTYP", "G-Type"},
    {"H", "Hurme Design"},
    {"H&FJ", "Hoefler & Frere-Jones"},
    {"HA", "HoboArt"},
    {"HAD", "Hoffmann Angelic Design"},
    {"Hafo", "Hafonton"},
    {"HAIL", "Hail Design"},
    {"HanS", "HanStyle"},
    {"HAUS", "TypeHaus"},
    {"HEB", "Sivan Toledo"},
    {"HFJ", "Hoefler & Frere-Jones (replaced by H&FJ)"},
    {"HIH", "HiH Retrofonts"},
    {"HILL", "Hill Systems"},
    {"HJZ", "Hans J. Zinken"},
    {"HKSY", "HAKUSYUFONTS"},
    {"HL", "High-Logic"},
    {"HM", "Haiku Monkey"},
    {"HoP", "House of Pretty"},
    {"HOUS", "House Industries"},
    {"HP", "Hewlett-Packard"},
    {"HS", "HermesSOFT Company"},
    {"HT", "Huerta Tipográfica"},
    {"HTF", "The Hoefler Type Foundry, Inc."},
    {"HU", "Hungarumlaut"},
    {"HVD", "HVD Fonts GmbH"},
    {"HXTP", "Hexatype"},
    {"HY", "HanYang Information & Communication"},
    {"IBM", "IBM"},
    {"IC", "Ian J. Cox"},
    {"IDAU", "IDAutomation.com, Inc."},
    {"IDEA", "Glenn Campbell t/a Idea Studio"},
    {"IDEE", "IDEE TYPOGRAFICA"},
    {"IDF", "International Digital Fonts"},
    {"IDMS", "Incstone Design by Megami Studios"},
    {"Idt.", "Identitype"},
    {"IFF", "Indian Font Factory"},
    {"IINF", "iInformatica Srls"},
    {"IKOF", "IKOffice GmbH"},
    {"ILP", "Indigenous Languages Project"},
    {"IMPR", "Impress"},
    {"INGA", "Inga Type"},
    {"INGT", "Ingrimayne Type"},
    {"INRA", "INRAY Inc."},
    {"INTF", "Interfont"},
    {"INTR", "Interstitial Entertainment"},
    {"INVC", "Invoice Central"},
    {"INVD", "TYPE INVADERS"},
    {"INVT", "Invisible Type"},
    {"ISE", "ISE-Aditi Info. Pvt . Ltd."},
    {"ITC", "ITC"},
    {"ITF", "Red Rooster Collection (ITF, Inc.)"},
    {"ITFO", "Indian Type Foundry"},
    {"ITSM", "Simon Stratford"},
    {"IvyF", "The Ivy Foundry"},
    {"IWA", "Iwata Corporation"},
    {"J23", "June 23"},
    {"JABM", "JAB'M Foundry"},
    {"JAF", "Just Another Foundry"},
    {"JAKE", "Jake Tilson Studio"},
    {"JBLT", "JEAN-BAPTISTE LEVÉE TYPOGRAPHY"},
    {"JCT", "Jamie Clarke Type"},
    {"JDB", "Jeff Bensch"},
    {"jeff", "jeff-levine"},
    {"JF", "Jan Fromm"},
    {"JHA", "Jan Henrik Arnold"},
    {"JHF", "JH Fonts"},
    {"JLIF", "jli Foundry – Julie Soudanne"},
    {"JOON", "JoonFont"},
    {"JP", "Jamra Patel"},
    {"JPTT", "Jeremy Tankard Typography Ltd"},
    {"JRW", "Richard Wordingham"},
    {"JUST", "Just in Type"},
    {"JVRT", "Just van Rossum Type"},
    {"JWTM", "Type Matters"},
    {"JY", "JIYUKOBO Ltd."},
    {"K", "Kvant Type Foundry"},
    {"ka", "kloeg architecture"},
    {"KAME", "Kame Design"},
    {"KATF", "Kingsley/ATF"},
    {"KBNT", "Kombinat-Typefounders"},
    {"KD", "Kassymkulov Design"},
    {"KDW", "Kinuta Font Factory"},
    {"KF", "Karakta Fonthome"},
    {"KHTB", "Monkey Arts Ltd."},
    {"KILO", "Kilotype"},
    {"KIRK", "Typekirk"},
    {"KLIM", "Klim Typographic Design"},
    {"KLTF", "Karsten Luecke"},
    {"KMRS", "Mony Sath & Chhit Wornnarith - KhemaraSoft"},
    {"KNST", "Konst.ru"},
    {"KNTR", "Kontour"},
    {"KOP", "Leo Koppelkamm"},
    {"KORK", "Khork OÜ"},
    {"KOST", "Kostic Type Foundry"},
    {"KOVL", "Koval Type Foundry"},
    {"KrKo", "Kreative Software"},
    {"KRND", "Karandash Type & Graphics Foundry"},
    {"KTF", "Kustomtype"},
    {"KTRF", "Kazan Traditional Font"},
    {"KUBA", "Kuba Tatarkiewicz"},
    {"KUSH", "KushJain"},
    {"L2M3", "L2M3 Kommunikationsdesign GmbH"},
    {"LA", "Large"},
    {"LAIT", "la laiterie"},
    {"LAND", "Typeland"},
    {"LANS", "Lanston Type Company"},
    {"LARA", "Larabiefonts"},
    {"LAUD", "Carolina Laudon"},
    {"LAYT", "LAYOUT SARL"},
    {"LBV", "La Bolde Vita"},
    {"LEAF", "Interleaf, Inc."},
    {"LETR", "Letraset"},
    {"lewd", "Lettering World LLC"},
    {"LFS", "Letters from Sweden"},
    {"LGFF", "LIPIGHOR FONT FOUNDRY"},
    {"LGX", "Logix Research Institute, Inc."},
    {"LHF", "Letterhead Fonts"},
    {"LIND", "Lindenberg Software LLC"},
    {"LING", "Linguist's Software"},
    {"LINK", "Linkpen Handwriting Fonts"},
    {"LINO", "Linotype GmbH"},
    {"LIVE", "Livedesign"},
    {"LJ", "Letterjuice"},
    {"LLDL", "La Lettre de Luxe"},
    {"LNGU", "LangusteFonts"},
    {"LNTO", "Lineto"},
    {"lool", "lo-ol Type"},
    {"LORO", "LoRo Productions"},
    {"LOU", "Lou Type Foundry"},
    {"LP", "LetterPerfect Fonts"},
    {"LT", "Le Typophage"},
    {"LTF", "Liberty Type Foundry"},
    {"LTFD", "Linnea Type"},
    {"Ltrm", "Lettermin type and design"},
    {"LTRX", "Lighttracks"},
    {"LTTR", "LettError"},
    {"LuAn", "Patrice Provost"},
    {"LUD", "Ludlow"},
    {"LuFo", "LucasFonts"},
    {"LUSH", "Lush Type"},
    {"LUV", "iLUVfonts"},
    {"M+F", "Measure + Fit"},
    {"MACR", "Macromedia / Made with Fontographer"},
    {"MADT", "MADType"},
    {"MagD", "Magus Digital"},
    {"MANS", "Mans Greback AB"},
    {"MAPS", "Tom Mouat's Map Symbol Fonts"},
    {"MATE", "TypeMates"},
    {"MATS", "Match Fonts"},
    {"MC", "Cerajewski Computer Consulting"},
    {"MCHL", "Michal Sahar"},
    {"MCKL", "MCKL"},
    {"MCOW", "Mountaincow"},
    {"MDSN", "Moraitis Design"},
    {"MEAP", "MetaAppz"},
    {"MEH", "Steve Mehallo"},
    {"MEIR", "Meir Sadan"},
    {"MESA", "FontMesa,"},
    {"MF", "Magic Fonts"},
    {"MFNT", "Masterfont"},
    {"MG", "Milieu Grotesque"},
    {"MGD", "Matt Grey Design"},
    {"MH", "Misti’s Fonts"},
    {"MHTY", "Minjoo Ham"},
    {"MILL", "Millan"},
    {"MINT", "Mint Type"},
    {"MISS", "Missy Meyer"},
    {"MJ", "Majus Corporation"},
    {"MJR", "Majur Inc."},
    {"MLAG", "Michael LaGattuta"},
    {"MLBU", "Malibu Dream Designs, LLC"},
    {"MLGC", "Micrologic Software"},
    {"mlss", "Mark Simonson Studio LLC"},
    {"MMFT", "Michel M."},
    {"MMIK", "Monomonnik"},
    {"MNCK", "Mine Creek"},
    {"mnik", "Mooniak"},
    {"MNJU", "Manjunatha Bengaluru"},
    {"MNKR", "Monokrom Skriftforlag AS"},
    {"MODI", "Modular Infotech Private Limited."},
    {"MOHT", "Al Mohtaraf Assaudi Ltd"},
    {"MOJI", "Mojijuku"},
    {"MOMI", "Momentum 18"},
    {"MONB", "Monib"},
    {"MONE", "Meta One Limited"},
    {"MONO", "Monotype Imaging"},
    {"MOON", "Moonlight Type and Technolog"},
    {"MOTA", "Mota Italic"},
    {"MRSL", "Mark Russell"},
    {"MRSW", "Morisawa & Company, Ltd."},
    {"MRV", "Morovia Corporation"},
    {"MS", "Microsoft Corp."},
    {"MSCH", "Guitar-Injection"},
    {"MSCR", "Majus Corporation"},
    {"MSE", "MSE-iT"},
    {"MSTK", "Alex Serada"},
    {"MT", "Monotype Imaging (replaced by MONO)"},
    {"MTF", "Miss Tiina Fonts"},
    {"MTFO", "Music Type Foundry"},
    {"MTNT", "Mutant Standard"},
    {"MTY", "Motoya Co. ,LTD."},
    {"MUTF", "Murasu Systems Sdn. Bhd"},
    {"MVB", "MVB Fonts"},
    {"MVTP", "Mauve Type"},
    {"MVty", "MV Typo"},
    {"MW", "Michael Want"},
    {"MYFO", "MyFonts.com"},
    {"NB", "No Bodoni Typography"},
    {"NBR", "Noir Blanc Rouge"},
    {"ncnd", "&cond"},
    {"NDCT", "Neufville Digital Corporatype"},
    {"NDEF", "Notdef Type"},
    {"NDTC", "Neufville Digital"},
    {"NEC", "NEC Corporation"},
    {"NEW", "Newlyn"},
    {"NICK", "Nick's Fonts"},
    {"NIS", "NIS Corporation"},
    {"NM", "NM type"},
    {"NN", "NN Type Foundry"},
    {"NONO", "Nouvelle Noire Type Foundry"},
    {"NOOT", "Nootype"},
    {"NOPN", "Noponies"},
    {"NorB", "NorFonts.ma"},
    {"NORF", "Norfok Incredible Font Design"},
    {"NOVA", "NOVATYPE"},
    {"NP", "Nipponia"},
    {"NVTF", "Nova Type Foundry"},
    {"NYM", "Nymark Type"},
    {"NYCM", "NYC Music Services"},
    {"ODSR", "Oddsorts"},
    {"OHG", "Our House Graphic Design"},
    {"OHNO", "OH no Type Company"},
    {"OKAY", "Okay Type"},
    {"OMNI", "Omnitype"},
    {"OMSE", "OMSETYPE"},
    {"Once", "Michael T Neff"},
    {"OPTM", "Optimo"},
    {"OPTO", "Opto"},
    {"OR", "Or Type"},
    {"ORBI", "Orbit Enterprises, Inc."},
    {"ORK1", "Ork1"},
    {"OSFC", "Out Of Step Font Company"},
    {"OST", "Orange Slice Type"},
    {"OURT", "Ourtype"},
    {"P22", "P22 Inc."},
    {"PARA", "ParaType Inc."},
    {"pbd0", "Peter Bain"},
    {"PBL", "Publié"},
    {"PDWX", "Parsons Design Workx"},
    {"PEAC", "PeachCreme.com"},
    {"PECI", "Pecita"},
    {"PETR", "Daria Petrova"},
    {"PF", "Phil's Fonts, Inc."},
    {"PHO", "phospho type foundry"},
    {"PHTM", "Phantom Foundry"},
    {"PINT", "PintassilgoPrints"},
    {"PIXL", "Pixilate"},
    {"PKDD", "Philip Kelly Digital Design"},
    {"PLAT", "PLATINUM technology"},
    {"Plau", "Plau"},
    {"PLAY", "Playtype"},
    {"PPPR", "Pepper Type"},
    {"PRFS", "Production First Software"},
    {"PRGR", "Paragraph"},
    {"PRLK", "Emre Parlak"},
    {"PROD", "Production Type"},
    {"PROT", "PROTOTYPO"},
    {"Prox", "Proxima Software"},
    {"PRTF", "Process Type Foundry"},
    {"PSIS", "PhotoShopIsland.com"},
    {"pstu", "Pseudonym Type Studio"},
    {"PSY", "PSY/OPS"},
    {"PT", "Playtype"},
    {"PTF", "Porchez Typofonderie"},
    {"PTMI", "Page Technology Marketing, Inc."},
    {"PTYP", "PreussType"},
    {"PYRS", "PYRS Fontlab Ltd. / Made with FontLab"},
    {"PYTE", "The Pyte Foundry"},
    {"QMSI", "QMS/Imagen"},
    {"QRAT", "Quadrat Communications"},
    {"QTYP", "Qtypography"},
    {"RARE", "Rare Bird Font Foundry"},
    {"RARI", "RAR Illustrations"},
    {"RDGR", "Rüdiger"},
    {"READ", "ReadyType"},
    {"REAL", "Underware"},
    {"RES", "Resultat"},
    {"RICK", "Rickner Type"},
    {"RIXF", "FONTRIX Inc."},
    {"RJPS", "Reall Graphics"},
    {"RJST", "Rob Jelinski Studios, llc."},
    {"RKFN", "R K Fonts"},
    {"RL", "Ruben Holthuijsen"},
    {"RLTF", "Rebeletter Studios"},
    {"RMU", "RMU TypeDesign"},
    {"ROB", "Robert Janes"},
    {"robo", "Buro Petr van Blokland"},
    {"ROBU", "SC ROBU DESIGN S.R.L."},
    {"ROHH", "ROHH studio"},
    {"RPTR", "Rampage Raptor"},
    {"RRT", "Red Rooster Collection (ITF, Inc.)"},
    {"RSJ", "RSJ Software"},
    {"RSMS", "Rsms"},
    {"RST", "Rosetta"},
    {"RUDY", "RudynFluffy"},
    {"RXBN", "Roxaboxen"},
    {"RYOB", "Ryobi Limited"},
    {"RYT", "Ra'ey Type"},
    {"S4TF", "Sed4-Type Foundry"},
    {"SAJA", "Saja Typeworks"},
    {"SALT", "Solonka Type Foundry"},
    {"SAND", "Sandoll"},
    {"SAPL", "Fonderie sans plomb"},
    {"SATY", "Samuelstype Design AB"},
    {"SAX", "s.a.x. Software gmbh"},
    {"SbB", "Sketchbook B"},
    {"SBT", "SelfBuild Type Foundry"},
    {"SCTO", "Schick Toikka"},
    {"SE", "Stéphane Elbaz"},
    {"Sean", "The FontSite"},
    {"SFS", "Sarumadhu Services Pvt. Ltd."},
    {"SFUN", "Software Union"},
    {"SG", "Scooter Graphics"},
    {"SHAM", "ShamFonts / Shamrock Int."},
    {"SHFT", "Shift"},
    {"SHMI", "Sharanda"},
    {"SHOT", "Shotype"},
    {"SHRP", "Sharp Type"},
    {"SHS", "Shahab Siavash Studio"},
    {"SHUB", "The Software Hub"},
    {"sic", "Skill Information'S' Co., Ltd."},
    {"SIG", "vLetter, Inc"},
    {"SIL", "SIL International (SIL)"},
    {"SIT", "Summit Information Technologies Pvt.Ltd,"},
    {"SKP", "Essqué Productions"},
    {"skz", "Celtic Lady's Fonts"},
    {"SL", "Silesian Letters"},
    {"Slab", "Schriftlabor"},
    {"SMC", "Swathanthra Malayalam Computing"},
    {"SMPJ", "Senamirmir Project"},
    {"SN", "SourceNet"},
    {"SOHO", "Soft Horizons"},
    {"SOS", "Standing Ovations Software"},
    {"SOTY", "So Type"},
    {"SPIR", "Spiratype"},
    {"SPRT", "Sports Fonts"},
    {"spty", "supertype"},
    {"SRC", "Source Foundry"},
    {"STC", "Sorkin Type Co"},
    {"STF", "Brian Sooy & Co + Sooy Type Foundry"},
    {"STFD", "snuffletrumper"},
    {"Stor", "Storm Type Foundry"},
    {"STYP", "Stone Type Foundry"},
    {"SUNW", "sunwalk fontworks"},
    {"SVTD", "Synthview"},
    {"SWFT", "Swfte International"},
    {"SWTY", "Swiss Typefaces"},
    {"SXRA", "Page42 Type Foundry"},
    {"SYDA", "Shree Muktananda Ashram"},
    {"SYN", "SynFonts"},
    {"SYRC", "Syriac Computing Institute"},
    {"SYRF", "Syrian Revolution font"},
    {"TB", "TypeBank Co.,Ltd"},
    {"TBFF", "TrueBlue Font Foundry"},
    {"TC", "Typeco"},
    {"TCH", "Darryl Cook"},
    {"TD", "Typedepot"},
    {"TDR", "Tansin A. Darcos & Co."},
    {"TERM", "Terminal Design, Inc."},
    {"TF", "Treacyfaces / Headliners"},
    {"TF3D", "TattooFont3D"},
    {"TFAC", "Typefactory"},
    {"TFND", "Typefounding"},
    {"TGHT", "TIGHTYPE"},
    {"THIN", "Thinstroke Design LLC"},
    {"TILD", "Tilde, SIA"},
    {"TIMO", "Tim Romano"},
    {"TIMR", "Tim Rolands"},
    {"TINY", "Tiny Type Co."},
    {"TIPO", "Tipo"},
    {"TIRO", "Tiro Typeworks"},
    {"TJS", "Typejockeys"},
    {"TLIN", "Teeline Fonts"},
    {"TM", "Type Mafia"},
    {"TMF", "The MicroFoundry"},
    {"TMT", "TypeMyType Comm. V."},
    {"TNB", "The Northern Block"},
    {"TNTY", "tntypography"},
    {"TO", "Tondonero"},
    {"TOKO", "Tokotype"},
    {"TOPP", "Toppan Printing Co., Ltd."},
    {"TPDP", "Type Department"},
    {"TPMA", "typoma"},
    {"TPOP", "Tipos Pereira Type Foundry"},
    {"TPSP", "Type Supply"},
    {"TPTA", "TPTQ Arabic"},
    {"TPTC", "Test Pilot Collective"},
    {"TPTQ", "Typotheque"},
    {"TR", "Type Revivals"},
    {"TRAF", "Traffictype"},
    {"TREE", "Treeflow"},
    {"TS", "TamilSoft Corporation"},
    {"TSPC", "Typespec Ltd"},
    {"TSTY", "Torleiv Georg Sverdrup"},
    {"TT", "TypeTogether"},
    {"TTC", "Tribby Type Co."},
    {"TTG", "Twardoch Typography"},
    {"TTY", "Tipotype"},
    {"TY", "Typocalypse"},
    {"TYCU", "TypeCulture"},
    {"TYFR", "typographies.fr"},
    {"TYME", "type me! Font Foundry"},
    {"TYPA", "Typadelic"},
    {"TYPB", "Type Brut"},
    {"TYPE", "Type Associates Pty Ltd"},
    {"TYPO", "Typodermic"},
    {"TYPR", "Type Project"},
    {"TYRE", "typerepublic"},
    {"UA", "UnAuthorized Type"},
    {"UBER", "übertype"},
    {"UKUK", "Ultra Kühl"},
    {"ULA", "Montserrat Typeface"},
    {"UNDS", "Underscore Type"},
    {"UNDT", "ÜNDT"},
    {"UNIC", "Unicode Consortium"},
    {"URW", "URW++"},
    {"UT", "Unitype Inc"},
    {"VINT", "Vinterstille"},
    {"VJ", "eDESIGNzone"},
    {"VKP", "Vijay K. Patel"},
    {"VLKF", "Visualogik Technology & Design"},
    {"VLNL", "VetteLetters.nl"},
    {"VMT", "VMType"},
    {"VOG", "Martin Vogel"},
    {"VOL", "Bernd Volmer"},
    {"VOLT", "volto.one"},
    {"VRED", "Vred Letters"},
    {"VROM", "Vladimir Romanov"},
    {"VS", "VorSicht GmbH"},
    {"VT", "VISUALTYPE SRL"},
    {"VTF", "Velvetyne Type Foundry"},
    {"VTP", "Quang Manh Nguyen"},
    {"VTYP", "(v) design"},
    {"WAFO", "Walden Font Co."},
    {"WALA", "Fontwala"},
    {"WASP", "Wasp Barcode Technologies"},
    {"WEI", "Wei Huang"},
    {"WILL", "Willerstorfer Font Foundry"},
    {"WL", "Writ Large Fonts"},
    {"WM", "Webmakers India"},
    {"XFC", "Xerox Font Services"},
    {"XOTH", "Xoth Morello"},
    {"XYZ", "XYZ Type LLC"},
    {"Y&Y", "Y&Y, Inc."},
    {"YDI", "YOON Design Group"},
    {"YDS", "Yellow Design Studio"},
    {"YN", "Yanone"},
    {"YOFF", "Your Own Font Foundry"},
    {"YOKO", "Yokokaku"},
    {"YOUR", "YourFonts.com"},
    {"YWFT", "YouWorkForThem"},
    {"z01", "Jiangxi ZoomlaCMS Soft Co. LTD"},
    {"ZANE", "Unrender"},
    {"ZeGr", "Zebra Font Factory"},
    {"zeta", "Tangram Studio"},
    {"ZSFT", "Zsoft"},

};

#define FONT_MANAGER_NOTICE_ENTRIES G_N_ELEMENTS(FontManagerNoticeData)
#define FONT_MANAGER_VENDOR_ENTRIES G_N_ELEMENTS(FontManagerVendorData)

G_END_DECLS

#endif /* __FONT_MANAGER_VENDOR_H__ */
