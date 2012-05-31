<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_uc_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer attributes
  $permissions['administer attributes'] = array(
    'name' => 'administer attributes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer cart links
  $permissions['administer cart links'] = array(
    'name' => 'administer cart links',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer catalog
  $permissions['administer catalog'] = array(
    'name' => 'administer catalog',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: administer order workflow
  $permissions['administer order workflow'] = array(
    'name' => 'administer order workflow',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer paypal
  $permissions['administer paypal'] = array(
    'name' => 'administer paypal',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product attributes
  $permissions['administer product attributes'] = array(
    'name' => 'administer product attributes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product classes
  $permissions['administer product classes'] = array(
    'name' => 'administer product classes',
    'roles' => array(),
  );

  // Exported permission: administer product features
  $permissions['administer product features'] = array(
    'name' => 'administer product features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product options
  $permissions['administer product options'] = array(
    'name' => 'administer product options',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer product stock
  $permissions['administer product stock'] = array(
    'name' => 'administer product stock',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: administer products
  $permissions['administer products'] = array(
    'name' => 'administer products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer store
  $permissions['administer store'] = array(
    'name' => 'administer store',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: bulk update stock
  $permissions['bulk update stock'] = array(
    'name' => 'bulk update stock',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: configure quotes
  $permissions['configure quotes'] = array(
    'name' => 'configure quotes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: configure taxes
  $permissions['configure taxes'] = array(
    'name' => 'configure taxes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: coupon wholesale pricing
  $permissions['coupon wholesale pricing'] = array(
    'name' => 'coupon wholesale pricing',
    'roles' => array(),
  );

  // Exported permission: create orders
  $permissions['create orders'] = array(
    'name' => 'create orders',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create products
  $permissions['create products'] = array(
    'name' => 'create products',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete all products
  $permissions['delete all products'] = array(
    'name' => 'delete all products',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete orders
  $permissions['delete orders'] = array(
    'name' => 'delete orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own products
  $permissions['delete own products'] = array(
    'name' => 'delete own products',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete payments
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: download file
  $permissions['download file'] = array(
    'name' => 'download file',
    'roles' => array(),
  );

  // Exported permission: edit all products
  $permissions['edit all products'] = array(
    'name' => 'edit all products',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit orders
  $permissions['edit orders'] = array(
    'name' => 'edit orders',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own products
  $permissions['edit own products'] = array(
    'name' => 'edit own products',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: fulfill orders
  $permissions['fulfill orders'] = array(
    'name' => 'fulfill orders',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: manage store coupons
  $permissions['manage store coupons'] = array(
    'name' => 'manage store coupons',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: manual payments
  $permissions['manual payments'] = array(
    'name' => 'manual payments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: unconditionally delete orders
  $permissions['unconditionally delete orders'] = array(
    'name' => 'unconditionally delete orders',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view all downloads
  $permissions['view all downloads'] = array(
    'name' => 'view all downloads',
    'roles' => array(),
  );

  // Exported permission: view all orders
  $permissions['view all orders'] = array(
    'name' => 'view all orders',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view all role expirations
  $permissions['view all role expirations'] = array(
    'name' => 'view all role expirations',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view all who bought what
  $permissions['view all who bought what'] = array(
    'name' => 'view all who bought what',
    'roles' => array(),
  );

  // Exported permission: view cart links report
  $permissions['view cart links report'] = array(
    'name' => 'view cart links report',
    'roles' => array(),
  );

  // Exported permission: view catalog
  $permissions['view catalog'] = array(
    'name' => 'view catalog',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view customers
  $permissions['view customers'] = array(
    'name' => 'view customers',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view imagecache cart
  $permissions['view imagecache cart'] = array(
    'name' => 'view imagecache cart',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache product
  $permissions['view imagecache product'] = array(
    'name' => 'view imagecache product',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache product_full
  $permissions['view imagecache product_full'] = array(
    'name' => 'view imagecache product_full',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache product_list
  $permissions['view imagecache product_list'] = array(
    'name' => 'view imagecache product_list',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache uc_category
  $permissions['view imagecache uc_category'] = array(
    'name' => 'view imagecache uc_category',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache uc_thumbnail
  $permissions['view imagecache uc_thumbnail'] = array(
    'name' => 'view imagecache uc_thumbnail',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view own orders
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view payments
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view reports
  $permissions['view reports'] = array(
    'name' => 'view reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view store coupons
  $permissions['view store coupons'] = array(
    'name' => 'view store coupons',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view store reports
  $permissions['view store reports'] = array(
    'name' => 'view store reports',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view uc_who_bought_what
  $permissions['view uc_who_bought_what'] = array(
    'name' => 'view uc_who_bought_what',
    'roles' => array(),
  );

  return $permissions;
}
