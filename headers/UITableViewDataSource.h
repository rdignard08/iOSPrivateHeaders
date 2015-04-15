
@protocol UITableViewDataSource, UITableViewDelegate, NSCoding;
@interface UITableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, NSCoding> {

    NSArray* _sections;
}
@property (nonatomic, copy, readwrite) NSArray* sections;
 + (id) staticDataSourceWithSections:(id)a;

 - (void) dealloc;
 - (double) tableView:(id)a heightForRowAtIndexPath:(id)b ;
 - (double) tableView:(id)a heightForHeaderInSection:(long long)b ;
 - (double) tableView:(id)a heightForFooterInSection:(long long)b ;
 - (id) tableView:(id)a viewForHeaderInSection:(long long)b ;
 - (id) tableView:(id)a viewForFooterInSection:(long long)b ;
 - (long long) tableView:(id)a editingStyleForRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a indentationLevelForRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (id) tableView:(id)a titleForHeaderInSection:(long long)b ;
 - (id) tableView:(id)a titleForFooterInSection:(long long)b ;
 - (BOOL) tableView:(id)a canEditRowAtIndexPath:(id)b ;
 - (BOOL) tableView:(id)a canMoveRowAtIndexPath:(id)b ;
 - (void) setSections:(id)a ;
 - (id) sections;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;


@end
