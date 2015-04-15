
@protocol LSApplicationWorkspaceObserverProtocol, NSSecureCoding;
@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding> {

    NSUUID* _uuid;
}
@property (nonatomic, retain, readwrite) NSUUID* uuid;
 + (BOOL) supportsSecureCoding;

 - (void) applicationInstallsDidCancel:(id)a;
 - (void) applicationInstallsDidPause:(id)a;
 - (void) applicationInstallsDidPrioritize:(id)a;
 - (void) applicationInstallsDidResume:(id)a;
 - (void) networkUsageChanged:(BOOL)a;
 - (void) applicationInstallsDidStart:(id)a;
 - (void) applicationInstallsDidUpdateIcon:(id)a;
 - (void) applicationInstallsDidChange:(id)a;
 - (void) applicationsWillInstall:(id)a;
 - (void) applicationsDidInstall:(id)a;
 - (void) applicationsDidFailToInstall:(id)a;
 - (void) applicationsWillUninstall:(id)a;
 - (void) applicationsDidUninstall:(id)a;
 - (void) applicationsDidFailToUninstall:(id)a;
 - (void) applicationInstallsArePrioritized:(id)aarePaused:(id)b;
 - (void) setUuid:(id)a;
 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) uuid;


@end
