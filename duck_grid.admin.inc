<?php

function duck_grid_settings_form($form, &$form_state) {
	$config = config('duck_grid.settings');

	return array(
		'max-width' => array(
			'#type' => 'textfield',
			'#title' => t('Container width'),
			'#default_value' => $config->get('max-width')
		),
		'submit' => array(
			'#type' => 'submit',
			'#value' => t('Save')
		)
	);
}

function duck_grid_settings_form_submit(&$form, &$form_state) {
	$values = $form_state['values'];

	$config = config('duck_grid.settings');
	$known_values = array_keys($config->get());

	foreach ($known_values as $key) {
		$config->set($key, $values[$key]);
	}

	$config->save();

	duck_grid_update_settings_css();
}
