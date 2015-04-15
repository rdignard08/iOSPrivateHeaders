
@protocol UITableViewDataSource;
@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {

    BOOL _limitingWithSections;
    q _maxVisibleSection;
    q _numberOfVisibleItemsInLastSection;
    q _filterType;
    @"<UITableViewDataSource>" _tableDataSource;
}
@property (nonatomic, assign, readwrite) NSNumber* filterType;
@property (nonatomic, assign, readwrite) NSNumber* tableDataSource;

 - (BOOL) respondsToSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (q) filterType;
 - (void) setTableDataSource:(id)a;
 - (void) setFilterType:(q)a;
 - (id) tableDataSource;
 - (q) _filteredNumberOfItemsGivenSection:(q)anumberOfItems:(q)b;


@end
