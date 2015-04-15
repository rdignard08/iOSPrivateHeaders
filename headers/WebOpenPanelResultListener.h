
@protocol WebOpenPanelResultListener;
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {

    ^{FileChooser=I^{FileChooserClient}{FileChooserSettings=B{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}{Vector<WTF::String, 0, WTF::CrashOnOverflow>=^{String}II}}} _chooser;
}

 - (void) chooseFilename:(id)a displayString:(id)b iconImage:(^{CGImage=})c ;
 - (void) cancel;
 - (id) initWithChooser:({PassRefPtr<WebCore::FileChooser>=^{FileChooser}})a ;
 - (void) chooseFilenames:(id)a displayString:(id)b iconImage:(^{CGImage=})c ;
 - (void) chooseFilename:(id)a ;
 - (void) chooseFilenames:(id)a ;


@end
