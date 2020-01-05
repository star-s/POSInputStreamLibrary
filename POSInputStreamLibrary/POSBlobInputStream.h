//
//  POSBlobInputStream.h
//  POSBlobInputStreamLibrary
//
//  Created by Pavel Osipov on 02.07.13.
//  Copyright (c) 2013 Pavel Osipov. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const POSBlobInputStreamErrorDomain;

typedef NS_ERROR_ENUM(POSBlobInputStreamErrorDomain, POSBlobInputStreamError) {
    codeDataSourceFailure = 0
};

@protocol POSBlobInputStreamDataSource;

@interface POSBlobInputStream : NSInputStream

@property (nonatomic, assign) BOOL shouldNotifyCoreFoundationAboutStatusChange;

// Designated initializer.
- (id)initWithDataSource:(NSObject<POSBlobInputStreamDataSource> *)dataSource;

@end

NS_ASSUME_NONNULL_END
