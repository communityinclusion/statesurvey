<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>>
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="IE=Edge">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
     <link href="https://getbootstrap.com/examples/jumbotron/jumbotron.css" rel="stylesheet">
   <link href='https://fonts.googleapis.com/css?family=Open+Sans:400,700' rel='stylesheet' type='text/css'>
   <link href='https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700' rel='stylesheet' type='text/css'>

  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->


  <?php print $scripts; ?>
 <script type="text/javascript">

 /* function onPageshow(){ var form = jQuery('.headFront #d3-statedata-dependent-dropdown');
    // let the browser natively reset defaults
    form[0].reset();
   jQuery(window).bind("pageshow", function() {
    var form = jQuery('.headFront #d3-statedata-dependent-dropdown');
    // let the browser natively reset defaults
    form[0].reset();
    form.find(':input').not(':button,:submit,:reset').trigger('change');
});} */

</script>
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
