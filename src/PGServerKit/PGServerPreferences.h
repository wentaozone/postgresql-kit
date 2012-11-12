
#import <Foundation/Foundation.h>
#import "PGServerKit.h"
#import "PGTokenizer.h"

typedef enum {
	PGServerPreferencesTypeConfiguration,
	PGServerPreferencesTypeAuthentication
} PGServerPreferencesType;

@interface PGServerPreferences : PGTokenizer {
	NSString* _path;
}

@property PGServerPreferencesType type;
@property (readonly) BOOL modified;
@property (readonly) NSString* path;

// constructors
-(id)initWithConfigurationFile:(NSString* )path;

// methods
-(BOOL)save;
-(BOOL)revert;

@end
