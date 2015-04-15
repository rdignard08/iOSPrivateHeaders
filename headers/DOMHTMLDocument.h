
@interface DOMHTMLDocument : DOMDocument {

}

 - (void) clear;
 - (void) open;
 - (void) close;
 - (id) plugins;
 - (id) compatMode;
 - (id) createDocumentFragmentWithMarkupString:(id)abaseURL:(id)b;
 - (id) createDocumentFragmentWithText:(id)a;
 - (id) _createDocumentFragmentWithMarkupString:(id)abaseURLString:(id)b;
 - (id) _createDocumentFragmentWithText:(id)a;
 - (id) bgColor;
 - (void) setBgColor:(id)a;
 - (id) embeds;
 - (id) scripts;
 - (id) dir;
 - (void) setDir:(id)a;
 - (id) designMode;
 - (void) setDesignMode:(id)a;
 - (id) fgColor;
 - (void) setFgColor:(id)a;
 - (id) alinkColor;
 - (void) setAlinkColor:(id)a;
 - (id) linkColor;
 - (void) setLinkColor:(id)a;
 - (id) vlinkColor;
 - (void) setVlinkColor:(id)a;
 - (void) write:(id)a;
 - (void) writeln:(id)a;
 - (void) captureEvents;
 - (void) releaseEvents;
 - (i) width;
 - (i) height;


@end
