type t;
type colors = Js.t {.
  primary: string,
  secondary: string,
  tertiary: string
};
type fonts = Js.t {.
  primary: string,
  secondary: string
};
/* @TODO is there a better way to avoid this .default issue? */
external create : colors => fonts => t = "default" [@@bs.module ("spectacle/lib/themes/default", "createTheme" )];

let red = "#db4d3f";
let black = "#1F2022";
let orange = "#EC670F";
let green = "#17c4ae";